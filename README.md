# supremica-model-translation-to-stateflow-chart
 
This project implements the translation of synthesized supervisor models from Supremica to Stateflow Charts in Simulink.

## Workflow:
1: Create the discrete event system model in Supremica with the required plants and specifications.

2: In the "Analysis" tab in Supremica, synthesize the supervisors.

3: Still in the "Analysis" tab, use the mouse to select the models you want to export.

4: Right-click on the selected models and click on "Export".

5: A dialog box will open. Select the XML option. Click OK and specify the location and filename for the exported file.

6: In the MATLAB command window or a script, extract the individual automata that were exported from Supremica from the generated XML file using the `getSupremicaAutomata` function. This function takes a string with the XML file name (including the file extension) generated when exporting the automata in Supremica. The function returns an array of structs, where each element represents an automaton described in the XML file. To better understand the structure, inspect it in the MATLAB workspace.

7: With the obtained automata from the previous step, you can translate each one into a Stateflow Chart using the `translateSupremicaAutomaton` function. This function takes an automaton structure (one of the elements from the previous step's output), a path to the Stateflow Chart within the Simulink model where you want to translate the automaton, and optional name-value pairs for configuration settings.

- These configuration settings allow you to define variable names to generate outputs for the Chart. This is especially useful when your automaton has states representing variable values. The example presented in this repository demonstrates how to use this option.

- In the optional settings, you can also define whether you want to broadcast received events. This is useful for supervisors as it allows using the supervisor's Chart as a filter for controllable events for the plants.

- The `inputEventsTrigger` option is used to define the type of input event used in the automaton. "Function call" receives Simulink signals of the function call type. "Rising" and "Falling" are used when events are indicated by transitions in a signal.

- The `inferData` option is used when you want Simulink itself to infer which events and variables the Chart has based on the labels of states and transitions.

- The `verbose` option is used for visualization of the translation process in the command window, indicating the number of states and transitions written in the Chart. States have the prefix "s" and transitions have the prefix "t".

8: A Simulink model will open with the translated automaton in the form of a Stateflow Chart. If the `translateSupremicaAutomaton` function is used with default configurations, the chart will have Function call inputs and outputs. Now you just need to copy the automaton to your project's model.

## Example:
The case dealt with is that of omnidirectional robots that move forward, backward, left, and right in a grid-based environment. The robots cannot occupy the same grid zone, and each robot has a zone in which one of its movements is uncontrollable.

The problem was modeled in Supremica (desmodel.wmod and robot_module.wmod). The events are u - forward, d - backward, l - left, r - right, and ureq - uncontrollable movement. The implemented model is parametrizable, allowing you to set the grid size, the number of robots in the scene, and the position and type of uncontrollable movement for each robot.

The specifications are pairwise, representing collision (robots occupying the same zone) as a forbidden blocking state. To avoid state explosion, the unobservable transition tau was used

. It is disregarded during translation and serves only for synthesis purposes.

The described workflow was used to generate and translate the automata (generateExampleCharts.m). Using the Remote API of CoppeliaSim (refer to the Coppelia API documentation), the final model (model2robots.slx or model3robots.slx) was connected to Coppelia (scene2robots.ttt or scene3robots.ttt), where the omnidirectional robots are simulated. The Simulink model generates random events and processes them with the translated supervisor to control the plants of each robot. These plants, in turn, produce the position of each robot in the grid, which is passed to Coppelia. For more information about connecting with Coppelia, it is recommended to read about Level-2 MATLAB S-functions in the MATLAB documentation.

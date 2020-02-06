# Minor-Project
## TITLE : COLOUR SENSOR USING LIGHT DEPENDENT RESISTOR
### AIM: 
     Design and develop a Colour Sensor using Light dependent resistor and it identify three basic colours red,green,blue.
### COMPONENTS USED:
+ Bread board
+ Red,Blue,green leds
+ Light dependent resistor(Phosistor)
+ 3-10 kilo ohms resistors 
+ 2-1 kilo ohms resistors
+ NOT gate IC (IC7404)
+ 7 segement display
+ Few jumper wires
+ Microcontroller (Adurino UNO)

### PROCEDURE:
![alt text](https://www.mathworks.com/matlabcentral/mlc-downloads/downloads/submissions/47605/versions/2/previews/html/Photoresistor%20Circuit%20Diagram.png)
+ As shown in the picture the connect the circuit and make sure you place the Light dependent resistor facing the LED.Light dependent resistor is also known as Photosistor,it is an active component that decreases resistance with respect to receiving luminosity on the component's sensitive surface. The resistance of a photoresistor decreases with increase in incident light intensity; in other words, it exhibits photoconductivity 
+ Basic colours Red,green,blue and the order of operating voltages Red > blue > green.And using audrino function called analogRead() get operating voltage.
+ As code uploaded below,Adurino is operated at the operating voltages and with the help of the operating voltage ranges it categorise which colour it belongs to and gives output at 3 different pins and supply given accordingly
+ And using Integrated Circuit connections are done such a way that corresponding outputs are displayed are displayed,For Red- R ,Green-G,Blue- B on 7 segment display which is nothing but number 6 and 8 for red and blue.
+ ## Note:Values were taken in dark.

### PURPOSE OF THE PROJECT:
+ Colour sensors have a wide range of applications in industrial, medical and security systems. Some of the applications are the light color temperature measurement, RGB LED consistency control, medical diagnosis systems, health fitness systems, industrial process control, etc and the purposes are understood
+ This project helped in designing a own sensor and it provided a basic knowlwdge on coding,hardware skills,embedded systems.

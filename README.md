# The Plant Caretaker

What if you didn't have to worry about who would look after your plants when you are away on holiday? The Plant Caretaker is an automatic irrigation system that uses Arduino to water your indoor plants! This type of system can be useful for those who want to make sure their plants are healthy and receive the appropriate amount of water each day. Without over- or under-watering.

There are several features in the system. The plant caretaker checks the soil moisture level daily and if the soil is wet enough, a green LED will turn on indicating a watered plant. Whereas if the soil is dry, it will start watering the plant and make a sound, to show that it has successfully hydrated the plant. A red LED light appears if the water reserve has run out, alerting the user.

## User’s Manual

1) Stick a moisture sensor into the plant pot. Make sure it is around 2-5cm deep and label has to face outward from the pot for the sensor to work properly. 

2)Fully submerge the water pump into the water container. 

3)Run the system! 

*Red light = not enough water supply 

*Green light = enough water supply and/or the plant is watered 

*Sound = plant has been successfully watered 

Tips: To make sure your plant is in the healthiest state: Make sure your plant get adequate sun light for their type! 

## Project Overview

**Purpose and aim** - The project’s aim is to look after the user’s plant for them. It also gives user an alternative choice to how they’d like to take care of their plants - our indicator, the light and sound notifications. 

**Target Audience** - To use it indoor with any types of plants 

**Market Research** - Most common types of self watering plant product would range around 20-300+ GBP. Most has watering system inside the product and rely on the plant’s ability to absorb water from it. Which we think lack a visual indication for users, relying solely on the belief that the product does it job. 

### **Design choices:**

- **Usability** - It is effective since it is reliable and waters the plant daily. User may struggle to water the plant everyday, over- or under-watering. Plant Caretaker has a set amount of water, and can be changed depending on the size of the plant.
- **User Experience** - It is entertaining. The sound notification it produces provide a entertaining way for the user to know that their plant is watered. User can also get creative with the sound notification by changing the note.
- **Feedback** - The Plant Caretaker gives the user feedbacks. It plays a sound to let them know the plant is successfully watered, in addition, the user also get a visual aid of the water flowing from the water supply to the plant through the clear plastic tube.

### Project Process

**Group Meeting** 

**17th November** 

We discussed about each project and decided to go with ‘Monitoring your plant’. We then start looking at the products in the market and also some example projects. We concluded that most product on the market are quite costly and most serves an aesthetic function for house’s decoration and not very much technical features. There is also an all round product which included artificial lightning, but is also very costly. 

We discussed possible consideration list and ideas. Such as the amount of water each types of plant would need, how to make it independent of the computer ,other variable factors such as sunlight, location of the plant (indoor, outdoor, which effects humidity level)  

**21st November**  

During the lab we look through some examples: 

https://www.youtube.com/watch?v=JdvnfENodak

And realises that the project needs a personalisation. We pitched in ideas of how to make it different from the other automatic/self watering products and decided to incorporate LED pins, piezo and a plushie. These will help indicate different situations and interact with the user. 

LED pins could possibly be used for indicating if the water in the water supply container is running out. It has to be the pins because its more subtle and you can spot it all the time unlike the piezo where it might play a sound just once. 

The piezo could be playing sound to interact with the user. 

We ordered 3 moisture sensors and 3 temperature and humidity sensors. 

![Untitled](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/c8ba4b14-a9fe-4533-88a4-e8fca506fa6d/Untitled.png)

figure 1. low-fidelity prototype

**28th November**

We first tested the moisture sensor and figure out the coding required. We calibrated the sensor and set the threshold value at 300. The higher the value the dryer the soil, vice versa. Therefore if the sensor is reading a value lower than 300, it turns on the green LED indicating everything is okay and if the value is over 300, it turns on the water pump. 

One limitation we found when calibrating was the moisture sensor only take reading on one side of it. The side with the label. Therefore it could be easily placed on the side of plant pot. 

Consideration list includes different types of plants, we decided to categorise plants into sizes. Depending on the sizing, would be different amount of water needed. Research done on the different sizes of pots and amount of water needed for each. Assumption made: Indoor, relatively humid and receiving adequate sunlight daily.  

We decided which features the LED pins and piezo would do:

constant red // sound(beeping?) = need more water

constant green = everything is working fine, plant is watered 

sound = to give feedbacks that the plant is watered and when it is dry 

**30th November**  

We tested both the water pump and the moisture sensor with real plant. We decided to use size small plant and both are herbs that can be easily grown indoor, quite sensitive to water level and growth can be easily spotted in short period of time for the sake of project. 

Testing it with real plant and the actual water pump makes us realise that there is a delay between the time it turns on and the time it start and end the watering period (due to the size pf the tube). Therefore the actual watering time is the actual amount of water that is going to be watered. 

| Size/cm  | On time/seconds  | Watering time/seconds   |
| --- | --- | --- |
| Small (5-10) | 2 | 5 |
| Medium (10-15) | 3 | 6 |
| Large (15-30)  | 5 | 8 |

figure 2. watering time guide 

[]()

figure 3. testing water pump and power supply

We also realise there is a delay in the moisture sensor. The user has to make sure the sensor is facing the right way and is deep enough into the soil to detect the moisture level throughout the whole pot. It is also compatible with pot size larger than 15cm, sensor measures the resistance of the soil, the more water in the soil, the lower the resistance.

**9th December 2022** 

![Screen Shot 2565-12-09 at 16.48.53.png](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/d7c904ca-9cfa-4d15-9bf3-1e98fbd8aece/Screen_Shot_2565-12-09_at_16.48.53.png)

We connect the LEDs and the piezo to make sure they can go inside the plushie. Using different types of wires we manage that. 

**10th December** 

We combine everything together. The plushie, piezo, LEDs, the water pump and the moisture sensor. 

We encounter a problem, which is the water is not turning off. We then later realised the wire is wired incorrectly and to turn off the pump, you have to use the relay motor to control it. 

**11th December** 

Made sure everything work well and did our presentation slides. 

### The Product

### Maker’s Manual

**Components:**

- Submersible Pool Water Pump X1
- Relay X1
- Soil Moisture Sensor X1
- Power supply X1
- Water container X1
- Red LED X1
- Green LED X1
- Piezo SpeakerX1
- 560 Ohm resistor X2

**Breadboard layout:** 

### Evaluations and Limitations

It is not suitable for outdoors. The power supply is not water proof which limited the use for this system. 

The system can not operate without a computer, the power supply is use for the water pump 

Assumption made about the environment of the plant can cause over-or under watering

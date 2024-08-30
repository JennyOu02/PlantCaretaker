# The Plant Caretaker

What if you didn't have to worry about who would look after your plants when you are away on holiday? The Plant Caretaker is an automatic irrigation system that uses Arduino to water your indoor plants! This type of system can be useful for those who want to make sure their plants are healthy and receive the appropriate amount of water each day. Without over- or under-watering.

There are several features in the system. The plant caretaker checks the soil moisture level daily and if the soil is wet enough, a green LED will turn on indicating a watered plant. Whereas if the soil is dry, it will start watering the plant and make a sound, to show that it has successfully hydrated the plant. A red LED light appears if the water reserve has run out, alerting the user.

## User’s Manual

1) Stick a moisture sensor into the plant pot. Make sure it is around 2-5cm deep and label has to face outward from the pot for the sensor to work properly. 

2) Fully submerge the water pump into the water container. 

3) Run the system! 

*Red light = not enough water supply 

*Green light = enough water supply and/or the plant is watered 

*Sound = plant has been successfully watered 

Low-fidelity prototype:

![Untitled](https://github.com/user-attachments/assets/51305e24-7350-4c5a-ad87-9f9ec5d57968)


Tips: To make sure your plant is in the healthiest state: Make sure your plant get adequate sun light for their type! 

## Project Overview

**Purpose and aim** - The project’s aim is to look after the user’s plant for them. It also gives user an alternative choice to how they’d like to take care of their plants - our indicator, the light and sound notifications. 

**Target Audience** - To use it indoor with any types of plants 

**Market Research** - Most common types of self watering plant product would range around 20-300+ GBP. Most has watering system inside the product and rely on the plant’s ability to absorb water from it. Which we think lack a visual indication for users, relying solely on the belief that the product does it job. 

### **Design choices:**

- **Usability** - It is effective since it is reliable and waters the plant daily. User may struggle to water the plant everyday, over- or under-watering. Plant Caretaker has a set amount of water, and can be changed depending on the size of the plant.
- **User Experience** - It is entertaining. The sound notification it produces provide a entertaining way for the user to know that their plant is watered. User can also get creative with the sound notification by changing the note.
- **Feedback** - The Plant Caretaker gives the user feedbacks. It plays a sound to let them know the plant is successfully watered, in addition, the user also get a visual aid of the water flowing from the water supply to the plant through the clear plastic tube.


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
<img width="817" alt="Screen Shot 2565-12-09 at 16 48 53" src="https://github.com/user-attachments/assets/281620d9-1de2-4592-adbb-82cfff5e33c4">

### Evaluations and Limitations

It is not suitable for outdoors. The power supply is not water proof which limited the use for this system. 

The system can not operate without a computer, the power supply is use for the water pump 

Assumption made about the environment of the plant can cause over-or under watering

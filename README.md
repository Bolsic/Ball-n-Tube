# Ball-n-Tube
Electronics and programming project that consists of making a see-through upright tube, just long enough for a ping-pong ball to pass through it, and attaching a motor with a propeller on one side. Then the motor is connected to an Arduino Uno microcontroller, which is receiving data from a PC with a webcam.

1. Part: Hardware

The fan is powered by an enhanced signal from an Arduino Uno. At its maximum power, it pushes the ball out of the other side of the tube. The microcontroller is receiving signals that dictate the strength of the signal from a USB connection to a laptop. The laptop is connected to a webcam that is filming the tube and detecting the ball.

2. Software

Arduino software is simple; the Arduino just sends the last signal given to it by the PC.

The computer detects the ball by filtering its orange color. This is done under the assumption that the ball is orange and nothing else in the shot is brightly orange. Then a PID controller, whose parameters were experimentally set, is used to control the signal that is later given to the motor with the task of keeping the ball in the middle of the tube.


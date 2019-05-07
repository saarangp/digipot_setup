# digipot_setup

#### Git Repo for Digipot setup for backscatter analysis
by: Saarang Panchavati


### Motivation

Accurately measuring backscatter modulation is key to understanding the behavior of neural dust PZTs under various load conditions. In the past, measuring modulation with discrete resistors proved to be effective in minimizing parasitics. However, manually swapping out resistors introduces lots of disturbance, and doesn't allow for fine load conditions to be measured. To ensure accurate measurements with minimal parasitics, I developed this digipot, arduino, and python workflow to rapidly and robustly acquire, and analyze data.  

### General Overview

In this repo there are the `.ino` file for the Arduino code, as well as jupyter notebooks for acquiring, and analyzing the data. This readme should give an indepth guide to using these tools to rapidly acquire load conditioned backscatter modulation. 

***
### Getting Started

Make sure you have git installed on your computer. If not, [here](https://www.atlassian.com/git/tutorials/install-git) is a tutorial

To get started, clone this repo: In terminal, run `git clone https://github.com/saarangp/digipot_setup/`
Then, cd into the repo.

#### Dependencies
Make sure you have pip installed on your machine. You can check by running `which pip` in your terminal. If you don't have it, install it [here](https://pip.pypa.io/en/stable/installing/).

Install dependencies by running `pip install -r requirements.txt` in your terminal. This will install all the python packages that you need.

***
### Data Acquisition 

In this setup, I use an Arduino [Uno](https://store.arduino.cc/usa/arduino-uno-rev3).

#### Connecting the Arduino to the Digipot

I already set up the breadboard necessary to use the digipot with the Arduino (see image below). **TO DO: INSERT IMAGE**

The breadboard is powered by the 5V pin from the Arduino. 

Number the pins of the digipot starting where 1 is on the top left, 8 is on the bottom left, and 9 is on the bottom right.

Pins `5-8` are connected to ground. Pin `16` is connected to the 5V rail. Pin `13` is connected to ground. 
Pins `12` and `14` are connected to the electrodes of the PZT. 
Finally, Pin `9` is connected to Analog input `A5` on the Arduino, and Pin `10` is connected to Analog input `A4` on the Arduino. 

**TODO: Upload testing software to check if it is set up correctly**

#### Software

Upload the file `digipot_python_control.ino` to the arduino.
This is the Arduino code that communicates with the digipot and sends information to the python script. The Arduino only instructs the digipot to change resistance when the python code tells it to proceed. The Arduino then changes the resistance 1 "tick" (increase of ~150 ohms) and sends the new resistance to the python script. 


#### Using the Jupyter Notebook to Acquire Data

In your terminal, run `jupyter notebook` and it should open a window in  your browser. After this, simply open `readoscope_arduino.ipynb` and follow the directions below. 

Prerequisites: 
1) The Tx is correctly aligned and focused, maximizing the voltage harvest in the open condition. 
2) The acquisition mode on the oscilloscope is set to "Averaging" with 512 averages. 
3) Your laptop is plugged into _both_ the oscilliscope and the Arduino. 

Run through the notebook (one cell at a time) to acquire the data. (You can run cells by pressing `shift + enter`). Be sure to read the comments in the cells before you run them. The workflow is as follows: acquire the waveform for the short condition, acquire the waveform for the open condition, and then acquire the waveform for all the conditions. The last step should take anywhere from 10-20 minutes to complete **TODO: Time this**. The reason it takes this long is because I added a delay to ensure that the oscilloscope has time (since we are performing averaging) to update itself. 
***

### Data Analysis

### Troubleshooting
**TO BE FILLED IN**

In the meantime, email me at saarangp@berkeley.edu with any questions. 

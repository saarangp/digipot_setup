# digipot_setup

#### Git Repo for Digipot setup for backscatter analysis
Saarang Panchavati


### Motivation

### General Overview



### Getting Started

Make sure you have git installed on your computer. If not, [here](https://www.atlassian.com/git/tutorials/install-git) is a tutorial

To get started, clone this repo: In terminal, run `git clone https://github.com/saarangp/digipot_setup/edit/master/README.md`
Then, cd into the repo.

#### Dependencies
Make sure you have pip installed on your machine. You can check by running `which pip` in your terminal. If you don't install it [here](https://pip.pypa.io/en/stable/installing/)

Install dependencies by running `pip install -r requirements.txt` in your terminal. This will install all the python packages that you need.

#### Setting Up the Arduino

##### Connection to Digipot

##### Software

Upload the file `digipot_python_control.ino` to the arduino.
This is the Arduino code that communicates with the digipot and sends information to the python script. The Arduino only instructs the digipot to change resistance when the python code tells it to proceed. The Arduino then changes the resistance 1 "tick" (increase of ~150 ohms) and sends the new resistance to the python script. 


#### Using the Jupyter Notebook

### Analysis

### Troubleshooting
**TO BE FILLED IN**

In the meantime, email me at saarangp@berkeley.edu with any questions. 

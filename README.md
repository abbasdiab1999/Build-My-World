# Build-My-World
Build my world is a project that spawns a different Models Created in Gazebo:
- Robot Model  in Model Editor.
- Building Model  using Building Editor.
- Model imported from online Gazebo Models Library.
- Display a Welcome Message created with C++.
  
![Build-My-World](https://github.com/abbasdiab1999/Build-My-World/assets/137702684/357faf83-9455-4f9e-b96a-0596f3b5383f)


## Requirments
- Gazebo
- C++
- Cmake
- Git

## Installation
**Source your destination path using:**  ` cd /Your path directory`     
**Clone the Repository with:** ` git clone https://github.com/abbasdiab1999/Build-My-World.git`  

## C++ Plugin
Make sure C++:  
` <plugin name="Your_Script_Name" filename="lib"Your_Script_Name".so"/>`   
Inside **MyWorld.world File**

## Launch the World file & C++ Plugin:  
**Access World Directory:** ` cd /Your Path Directory /Build-My-World/World `  
**Run World file:** ` gazebo MyWorld `  

## Project Structure
.Build-My-World                    # Project Name  
- Model                            # Models Folder  
  - 4WheelRobot                    # Robot Model Folder  
    - model.config                 # Model Configuration File  
    - model.sdf                    # Model Simulation Description File  
  - MyBuilding                     # Building Model Folder
    - model.config                 # Model Configuration File  
    - model.sdf                    # Model Simulation Description File  
- Script                           # Script Folder  
    - Welcome.cpp                  # C++ Script File  
- World                            # World Folder  
  - MyWorld.world                  # World File that contains all Models & C++ Plugin  

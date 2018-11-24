
.. raw:: html

   <a href="https://www.zephyrproject.org">
     <p align="center">
       <img src="doc/images/Zephyr-Project.png">
     </p>
   </a>

   <a href="https://bestpractices.coreinfrastructure.org/projects/74"><img
   src="https://bestpractices.coreinfrastructure.org/projects/74/badge"></a>
   <img
   src="https://api.shippable.com/projects/58ffb2b8baa5e307002e1d79/badge?branch=master">


Port to `PulseRain Reindeer Soft CPU <https://github.com/PulseRain/Reindeer>`_
******************************************************************************

This repository is a fork of Zephyr 1.13.0 release, and is customized to support `PulseRain Reindeer Soft CPU <https://github.com/PulseRain/Reindeer>`_


Development Environment Setup on Linux
**************************************

Before the build, please follow the instructions `here <https://docs.zephyrproject.org/latest/getting_started/installation_linux.html>`_ to setup development environment. 

The rest of the document assumes Linux is used as host for build, and Zephyr SDK 0.9.5 is used for toolchain.


Build the Sample Applications
*****************************

The following 3 sample applications have been tested with the `PulseRain Reindeer Soft CPU <https://github.com/PulseRain/Reindeer>`_. 

*) hello_world
*) synchronization
*) philosophers

To build for sample applications, users can do as following: (take philosophers for example)

* git clone https://github.com/PulseRain/zephyr.git *

* cd zephyr/samples/philosophers;mkdir build;cd build *

* cmake -DBOARD=reindeer .. *

* make *

And the elf file can be found in build/zephyr/zephyr.elf

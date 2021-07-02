# CUIR Boards
This core is a fork from [STM32duino](https://github.com/stm32duino/Arduino_Core_STM32)

For installing this core via Arduino manager, add the following link to **Additional Boards Manager URLs** in the preferences of Arduino IDE:- 
```
https://github.com/mhmayyan/General/raw/master/package_cuir_index.json
```
On Arduino IDE, go to **Tools>Board>Boards Manager** and search for **Clemson University Intelligent River**. Click on install.

## Flasher
[STM32CubeProgrammer](https://www.st.com/en/development-tools/stm32cubeprog.html) must be downloaded and installed for flashing. Make sure to include it to the environment path. Please follow [Installation instructions](https://wiki.st.com/stm32mpu/wiki/STM32CubeProgrammer).

On Windows machine search for **Edit the system environment variables**. At the bottom of the opened dialogue, click on **Environment Variables**. In the box of **System variables** edit **path** and add the path where the binaries of STMicroelectronics STM32CubeProgrammer was installed, for example ```C:\Program Files\STMicroelectronics\STM32Cube\STM32CubeProgrammer\bin```

**NOTE** To flash firmware, Arduino IDE automatically invokes STM32CubeProgrammer when the Upload button is clicked. **You do not need to use STM32CubeProgrammer**. Arduino IDE will do this.

## USB to UART Adapter
If your Windows machine does not recognize the adapter, you might need to download and install the [FTDI driver](https://ftdichip.com/wp-content/uploads/2021/02/CDM21228_Setup.zip) for Windows. 

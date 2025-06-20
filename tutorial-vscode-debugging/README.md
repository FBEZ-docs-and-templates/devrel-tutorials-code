## Steps

1. Connect the ESP-PROG to the pins / USB Pins
2. Select `ESP-IDF: Select OpenOCD Board configuration`: ESP32-C3 Chip (via ESP-PROG)

__Error__

`Error: esp_usb_jtag: could not find or open device (ESP32-S3-DevKitC-1) (OCD-631) #219`: Flash (UART) your project. First the firmware using UART

__launch.json__

If error
```bash
Error while checking requirement 'esp-debug-backend'. Package was not found and is required by the application: No package metadata was found for esp-debug-backend
Please follow the instructions found in the "Set up the tools" section of ESP-IDF Getting Started Guide.
Diagnostic information:
    IDF_PYTHON_ENV_PATH: (not set)
    Python interpreter used: /Users/<username>/.espressif/python_env/idf5.4_py3.13_env/bin/python
    Warning: python interpreter not running from IDF_PYTHON_ENV_PATH
```
then json
```json
{
    "version": "0.2.0",
    "configurations": [
      {
        "type": "gdbtarget",
        "request": "attach",
        "name": "Eclipse CDT GDB Adapter"
      },
      {
        "type": "espidf",
        "name": "Launch",
        "request": "launch"
      }
    ]
  }
```
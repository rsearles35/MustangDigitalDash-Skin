
; This skin supports reading HWiNFO hardware values with two different metchods
; By default, it will read from RAM suing the HWiNFO plugin
; To change this behavior:
; - LEFT CLICK the gear icon in the skin to use the plugin (read direct from RAM)
; - RIGHT CLICK the gear icon in the skin to use the Registry (read from Windows registry)


; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; This is the configuration file when using the plugin (read RAM directly)
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


; ************************************************************
; HWiNFO PLUGIN MEASURES
; ************************************************************
; These Measures uses the "Shared Memory" feature of HWiNFO
; HWiNFO stores the hardware values in RAM, and the HWiNFO plugin reads these values directly from RAM
; This is the fastest & most efficient method for accessing frequently changing values
; ** This method DOES require that you license HWiNFO, or re-enable the shared memory every 12 hours **
; Instructions for HWiNFO Plugin method: 
; - https://www.hwinfo.com/forum/threads/rainmeter-plug-in-for-hwinfo-2-0.1364/
; - https://www.hwinfo.com/forum/threads/rainmeter-plug-in-for-hwinfo-3-2.2172/
; - https://www.youtube.com/watch?v=fv9BX_YibB0


; ************************************************************
; START Variables Section
; - do NOT edit these values directly
; - left click the gear in the skin and use the included
; program to update the values much easier
; ** I'm leaving my hardware item path here for your reference
; ************************************************************

[Variables]

; CPU [#0]: Intel Core i7-13700K : Total CPU Usage
HWiNFO-CPU0-Usage-SensorId=0xf0000300
HWiNFO-CPU0-Usage-SensorInstance=0x0
HWiNFO-CPU0-Usage-EntryId=0x7000021
; CPU [#0]: Intel Core i7-13700K: DTS : CPU Package
HWiNFO-CPU0-Temp-SensorId=0xf0000501
HWiNFO-CPU0-Temp-SensorInstance=0x0
HWiNFO-CPU0-Temp-EntryId=0x1000003
; CPU [#0]: Intel Core i7-13700K: Enhanced : CPU Package Power
HWiNFO-CPU0-Watts-SensorId=0xf0000501
HWiNFO-CPU0-Watts-SensorInstance=0x0
HWiNFO-CPU0-Watts-EntryId=0x5000000
; CPU [#0]: Intel Core i7-13700K : P-core 0 Clock
HWiNFO-CPU0-Clock-SensorId=0xf0000300
HWiNFO-CPU0-Clock-SensorInstance=0x0
HWiNFO-CPU0-Clock-EntryId=0x6000000
; MSI MPG Z690 CARBON EK X (MS-7D30) (Nuvoton NCT6687D) : Vcore
HWiNFO-CPU0-VCore-SensorId=0xf7006687
HWiNFO-CPU0-VCore-SensorInstance=0x0
HWiNFO-CPU0-VCore-EntryId=0x2000012
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Core Load
HWiNFO-GPU0-Usage-SensorId=0xe0002000
HWiNFO-GPU0-Usage-SensorInstance=0x0
HWiNFO-GPU0-Usage-EntryId=0x7000000
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Temperature
HWiNFO-GPU0-Temp-SensorId=0xe0002000
HWiNFO-GPU0-Temp-SensorInstance=0x0
HWiNFO-GPU0-Temp-EntryId=0x1000000
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Power
HWiNFO-GPU0-Watts-SensorId=0xe0002000
HWiNFO-GPU0-Watts-SensorInstance=0x0
HWiNFO-GPU0-Watts-EntryId=0x5000000
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Core Voltage
HWiNFO-GPU0-VCore-SensorId=0xe0002000
HWiNFO-GPU0-VCore-SensorInstance=0x14
HWiNFO-GPU0-VCore-EntryId=0x2000000
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Memory Usage
HWiNFO-GPU0-VRAMUsage-SensorId=0xe0002000
HWiNFO-GPU0-VRAMUsage-SensorInstance=0x0
HWiNFO-GPU0-VRAMUsage-EntryId=0x7000008
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Clock
HWiNFO-GPU0-Clock-SensorId=0xe0002000
HWiNFO-GPU0-Clock-SensorInstance=0x0
HWiNFO-GPU0-Clock-EntryId=0x6000000
; Corsair Commander CORE : Temperature 2
HWiNFO-Water-Temp-SensorId=0xf7067990
HWiNFO-Water-Temp-SensorInstance=0x0
HWiNFO-Water-Temp-EntryId=0x1000008
; MSI MPG Z690 CARBON EK X (MS-7D30) (Nuvoton NCT6687D) : PUMP1
HWiNFO-Water-PumpSpeed-SensorId=0xf7067990
HWiNFO-Water-PumpSpeed-SensorInstance=0x0
HWiNFO-Water-PumpSpeed-EntryId=0x3000006
; System: MSI MS-7D30 : Physical Memory Load
HWiNFO-RAM-Usage-SensorId=0xf0000301
HWiNFO-RAM-Usage-SensorInstance=0x0
HWiNFO-RAM-Usage-EntryId=0x8000005
; RTSS: Framerate
HWiNFO-Framerate-SensorId=0xf00f5000
HWiNFO-Framerate-SensorInstance=0x0
HWiNFO-Framerate-EntryId=0x8000000
; Network: Intel Ethernet Controller I225-V : Current UL rate
HWiNFO-Network-Upload-SensorId=0xf000ea00
HWiNFO-Network-Upload-SensorInstance=0x0
HWiNFO-Network-Upload-EntryId=0x8000003
; Network: Intel Ethernet Controller I225-V : Current DL rate
HWiNFO-Network-Download-SensorId=0xf000ea00
HWiNFO-Network-Download-SensorInstance=0x0
HWiNFO-Network-Download-EntryId=0x8000002
; Drive: Samsung SSD 980 PRO 1TB (S5xxxx7W) : Total Activity
HWiNFO-DriveC-Usage-SensorId=0xf0000101
HWiNFO-DriveC-Usage-SensorInstance=0x1
HWiNFO-DriveC-Usage-EntryId=0x7000002
; Drive: WD_BLACK SN850X 2000GB (22xxxx02) : Total Activity
HWiNFO-DriveD-Usage-SensorId=0xf0000101
HWiNFO-DriveD-Usage-SensorInstance=0x2
HWiNFO-DriveD-Usage-EntryId=0x7000002
; Drive: Samsung SSD 970 EVO Plus 2TB (S6S2NS0T806690M) : Total Activity
HWiNFO-DriveE-Usage-SensorId=0xf0000101
HWiNFO-DriveE-Usage-SensorInstance=0x3
HWiNFO-DriveE-Usage-EntryId=0x7000002
; Drive: Intel Raid 1 Volume (Volume1) : Total Activity
HWiNFO-DriveF-Usage-SensorId=0xf0000101
HWiNFO-DriveF-Usage-SensorInstance=0x0
HWiNFO-DriveF-Usage-EntryId=0x7000002

; ************************************************************
; START HWiNFOSharedMemoryViewer Config
; - do NOT edit unless you are adding/removing measures to
; the HWiNFOSharedMemoryViewer.exe program (skin authors)
; ************************************************************

; CPU
[HWiNFO-Config-CPU]
HWiNFO-CPU0-Usage=CPU0 Usage (%)
HWiNFO-CPU0-Temp=CPU0 Temperature (C)
HWiNFO-CPU0-Watts=CPU0 Power (W)
HWiNFO-CPU0-VCore=CPU0 Core Volatage (V)
HWiNFO-CPU0-Clock=CPU0 Clock Speed (MHz)

; GPU
[HWiNFO-Config-GPU]
HWiNFO-GPU0-Usage=GPU0 Usage (%)
HWiNFO-GPU0-Temp=GPU0 Temperature (C)
HWiNFO-GPU0-Watts=GPU0 Power (W)
HWiNFO-GPU0-VCore=GPU0 Core Volatage (V)
HWiNFO-GPU0-VRAMUsage=GPU0 VRAM Usage (%)
HWiNFO-GPU0-Clock=GPU0 Clock Speed (MHz)

; Water
[HWiNFO-Config-Water]
HWiNFO-Water-Temp=Water Temperature (C)
HWiNFO-Water-PumpSpeed=Water Pump Speed (RPM)

; System
[HWiNFO-Config-System]
HWiNFO-RAM-Usage=RAM Usage (%)
HWiNFO-Framerate=Framerate (FPS, requires RTSS)

; Network
[HWiNFO-Config-Network]
HWiNFO-Network-Upload=Upload Rate (KB/s)
HWiNFO-Network-Download=Download Rate (KB/s)

; Hard Drives
[HWiNFO-Config-Storage]
HWiNFO-DriveC-Usage=C: Drive Usage (%)
HWiNFO-DriveD-Usage=D: Drive Usage (%)
HWiNFO-DriveE-Usage=E: Drive Usage (%)
HWiNFO-DriveF-Usage=F: Drive Usage (%)


; ************************************************************
; START MEASURES SECTION
; - do NOT edit unless you are adding/removing measures
; ************************************************************


[CPU0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[CPU0UsageRadial]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=40

[CPU0UsageLinear]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=40
MaxValue=100

[CPU0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Temp-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[CPU0Watts]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Watts-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Watts-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Watts-EntryId#
HWiNFOType=CurrentValue

[CPU0Core0Clock]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-Clock-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Clock-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Clock-EntryId#
HWiNFOType=CurrentValue

[CPU0VCore]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-CPU0-VCore-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-VCore-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-VCore-EntryId#
HWiNFOType=CurrentValue

; GPU

[GPU0Usage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[GPU0Temp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[GPU0Watts]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-Watts-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-Watts-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Watts-EntryId#
HWiNFOType=CurrentValue

[GPU0VCore]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-VCore-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-VCore-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-VCore-EntryId#
HWiNFOType=CurrentValue

[GPU0VRAMUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-VRAMUsage-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-VRAMUsage-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-VRAMUsage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[GPU0Clock]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Clock-EntryId#
HWiNFOType=CurrentValue

; WATER COOLING

[WaterTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-Water-Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-Water-Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-Water-Temp-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[WaterPumpSpeed]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-Water-PumpSpeed-SensorId#
HWiNFOSensorInstance=#HWiNFO-Water-PumpSpeed-SensorInstance#
HWiNFOEntryId=#HWiNFO-Water-PumpSpeed-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=5000

; SYSTEM

[RAMUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-RAM-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-RAM-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-RAM-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[FPS]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-Framerate-SensorId#
HWiNFOSensorInstance=#HWiNFO-Framerate-SensorInstance#
HWiNFOEntryId=#HWiNFO-Framerate-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; NETWORK

[NetworkUpload]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-Network-Upload-SensorId#
HWiNFOSensorInstance=#HWiNFO-Network-Upload-SensorInstance#
HWiNFOEntryId=#HWiNFO-Network-Upload-EntryId#
HWiNFOType=CurrentValue

[NetworkDownload]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-Network-Download-SensorId#
HWiNFOSensorInstance=#HWiNFO-Network-Download-SensorInstance#
HWiNFOEntryId=#HWiNFO-Network-Download-EntryId#
HWiNFOType=CurrentValue

; STORAGE

[HDDUsageC]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-DriveC-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-DriveC-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-DriveC-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[HDDUsageD]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-DriveD-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-DriveD-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-DriveD-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[HDDUsageE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-DriveE-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-DriveE-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-DriveE-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

[HDDUsageF]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#HWiNFO-DriveF-Usage-SensorId#
HWiNFOSensorInstance=#HWiNFO-DriveF-Usage-SensorInstance#
HWiNFOEntryId=#HWiNFO-DriveF-Usage-EntryId#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

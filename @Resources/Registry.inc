
; This skin supports reading HWiNFO hardware values with two different metchods
; By default, it will read from RAM suing the HWiNFO plugin
; To change this behavior:
; - LEFT CLICK the gear icon in the skin to use the plugin (read direct from RAM)
; - RIGHT CLICK the gear icon in the skin to use the Registry (read from Windows registry)


; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
; This is the configuration file when using the REGISTRY method
; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! 


; ************************************************************
; WINDOWS REGISTRY MEASURES (HWiNFO GADGET)
; ************************************************************
; These Measures uses the Windows Registry to relay information.
; The HWiNFO Gadget stores the hardware values in the Windows Registry, and Rainmeter queries the registry to get these values.
; Although this method has more overhead, the registry is highly optimized resulting in negligible diferences
; ** This method DOES NOT require that you license HWiNFO or re-enable the shared memory every 12 hours **
; Instructions for Windows Registry method:
; - https://docs.rainmeter.net/tips/hwinfo/
; - https://forum.rainmeter.net/viewtopic.php?t=37160

; Registry/Gadget Indexes
; You only need to update the [Variables] section here, so the index number matches your registry.
; Do not edit the other measures below it unless you are adding/removing measures
; ** I'm leaving my hardware item path here for your reference

[Variables]
; CPU [#0]: Intel Core i7-13700K : Total CPU Usage
IndexCPU0Usage=2
; CPU [#0]: Intel Core i7-13700K: DTS : CPU Package
IndexCPU0Temp=3
; CPU [#0]: Intel Core i7-13700K: Enhanced : CPU Package Power
IndexCPU0Watts=4
; CPU [#0]: Intel Core i7-13700K : P-core 0 Clock
IndexCPU0Core0Clock=1
; MSI MPG Z690 CARBON EK X (MS-7D30) (Nuvoton NCT6687D) : Vcore
IndexCPU0VCore=5
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Core Load
IndexGPU0Usage=16
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Temperature
IndexGPU0Temp=12
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Power
IndexGPU0Watts=14
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Core Voltage
IndexGPU0VCore=13
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Memory Usage
IndexGPU0VRAMUsage=17
; GPU [#1]: NVIDIA GeForce RTX 3080 12GB: GPU Clock
IndexGPU0Clock=15
; Corsair Commander CORE : Temperature 2
IndexWaterTemp=11
; MSI MPG Z690 CARBON EK X (MS-7D30) (Nuvoton NCT6687D) : PUMP1
IndexWaterPumpSpeed=6
; System: MSI MS-7D30 : Physical Memory Load
IndexRAMUsage=0
; RTSS: Framerate
IndexRTSSFPS=18
; Network: Intel Ethernet Controller I225-V : Current UL rate
IndexNetworkUpload=20
; Network: Intel Ethernet Controller I225-V : Current DL rate
IndexNetworkDownload=19
; Drive: Samsung SSD 980 PRO 1TB (S5xxxx7W) : Total Activity
IndexHDDUsageC=8
; Drive: WD_BLACK SN850X 2000GB (22xxxx02) : Total Activity
IndexHDDUsageD=9
; Drive: Samsung SSD 970 EVO Plus 2TB (S6S2NS0T806690M) : Total Activity
IndexHDDUsageE=10
; Drive: Intel Raid 1 Volume (Volume1) : Total Activity
IndexHDDUsageF=7

; ************************************************************
; START MEASURES SECTION
; - do NOT edit unless you are adding/removing measures
; ************************************************************

; CPU

[HWiNFOCPU0Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Usage#

[CPU0Usage]
Measure=Calc
Formula=HWiNFOCPU0Usage
MinValue=0
MaxValue=100

[HWiNFOCPU0UsageRadial]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Usage#

[CPU0UsageRadial]
Measure=Calc
Formula=HWiNFOCPU0UsageRadial
MinValue=0
MaxValue=40

[HWiNFOCPU0UsageLinear]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Usage#

[CPU0UsageLinear]
Measure=Calc
Formula=HWiNFOCPU0UsageLinear
MinValue=40
MaxValue=100

[HWiNFOCPU0Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Temp#

[CPU0Temp]
Measure=Calc
Formula=HWiNFOCPU0Temp
MinValue=0
MaxValue=100

[HWiNFOCPU0Watts]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Watts#

[CPU0Watts]
Measure=Calc
Formula=HWiNFOCPU0Watts

[HWiNFOCPU0Core0Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0Core0Clock#

[CPU0Core0Clock]
Measure=Calc
Formula=HWiNFOCPU0Core0Clock

[HWiNFOCPU0VCore]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexCPU0VCore#

[CPU0VCore]
Measure=Calc
Formula=HWiNFOCPU0VCore

; GPU

[HWiNFOGPU0Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0Usage#

[GPU0Usage]
Measure=Calc
Formula=HWiNFOGPU0Usage
MinValue=0
MaxValue=100

[HWiNFOGPU0Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0Temp#

[GPU0Temp]
Measure=Calc
Formula=HWiNFOGPU0Temp
MinValue=0
MaxValue=100

[HWiNFOGPU0Watts]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0Watts#

[GPU0Watts]
Measure=Calc
Formula=HWiNFOGPU0Watts

[HWiNFOGPU0VCore]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0VCore#

[GPU0VCore]
Measure=Calc
Formula=HWiNFOGPU0VCore

[HWiNFOGPU0VRAMUsage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0VRAMUsage#

[GPU0VRAMUsage]
Measure=Calc
Formula=HWiNFOGPU0VRAMUsage
MinValue=0
MaxValue=100

[HWiNFOGPU0Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexGPU0Clock#

[GPU0Clock]
Measure=Calc
Formula=HWiNFOGPU0Clock

; water cooling

[HWiNFOWaterTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexWaterTemp#

[WaterTemp]
Measure=Calc
Formula=HWiNFOWaterTemp
MinValue=0
MaxValue=100

[HWiNFOWaterPumpSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexWaterPumpSpeed#

[WaterPumpSpeed]
Measure=Calc
Formula=HWiNFOWaterPumpSpeed
MinValue=0
MaxValue=5000

; SYSTEM

[HWiNFORAMUsage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexRAMUsage#

[RAMUsage]
Measure=Calc
Formula=HWiNFORAMUsage
MinValue=0
MaxValue=100

[HWiNFORTSSFPS]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexRTSSFPS#

[FPS]
Measure=Calc
Formula=HWiNFORTSSFPS
MinValue=0
MaxValue=100

; NETWORK

[HWiNFONetworkUpload]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexNetworkUpload#

[NetworkUpload]
Measure=Calc
Formula=HWiNFONetworkUpload

[HWiNFONetworkDownload]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexNetworkDownload#

[NetworkDownload]
Measure=Calc
Formula=HWiNFONetworkDownload

; STORAGE

[HWiNFOHDDUsageC]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexHDDUsageC#

[HDDUsageC]
Measure=Calc
Formula=HWiNFOHDDUsageC
MinValue=0
MaxValue=100

[HWiNFOHDDUsageD]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexHDDUsageD#

[HDDUsageD]
Measure=Calc
Formula=HWiNFOHDDUsageD
MinValue=0
MaxValue=100

[HWiNFOHDDUsageE]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexHDDUsageE#

[HDDUsageE]
Measure=Calc
Formula=HWiNFOHDDUsageE
MinValue=0
MaxValue=100

[HWiNFOHDDUsageF]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw#IndexHDDUsageF#

[HDDUsageF]
Measure=Calc
Formula=HWiNFOHDDUsageF
MinValue=0
MaxValue=100
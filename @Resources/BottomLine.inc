
; Bottom line & meters shared by all skins

[MeterBottomLine]
Meter=Shape
UpdateDivider=-1
;line shadow
Shape=Line (500*#ScaleX#),(410*#ScaleY#),(1420*#ScaleX#),(410*#ScaleY#) | Extend GaugeOutlineShadowModifiers, StrokeRoundBoth
;line
Shape2=Line (500*#ScaleX#),(410*#ScaleY#),(1420*#ScaleX#),(410*#ScaleY#) | Extend GaugeOutlineLineModifiers, StrokeRoundBoth
; line styles
GaugeOutlineShadowModifiers= StrokeWidth #GaugeShadowLineWidth# | Stroke Color #GaugeShadowColor# | Fill Color #GaugeLineFillColor#
GaugeOutlineLineModifiers= StrokeWidth #GaugeLineWidth# | Stroke Color #GaugeLineColor# | Fill Color #GaugeLineFillColor#
StrokeRoundBoth=StrokeStartCap Round | StrokeEndCap Round

; ******************************
; DATE & TIME
; ******************************

[MeasureTime]
Measure=Time
Format=%#I:%M

[MeterTime]
Meter=String
UpdateDivider=30
MeterStyle=GaugeFontStyle
MeasureName=MeasureTime
; X=1360
; Y=430
X=(#ResolutionX# - (560 * #ScaleX#))
Y=(#ResolutionY# - (50 * #ScaleY#))
FontSize=(20 * #ScaleY#)

[MeasureMonth]
Measure=Time
Format=%b

[MeterMonth]
Meter=String
UpdateDivider=30
MeterStyle=GaugeFontStyle
MeasureName=MeasureMonth
; X=1290
; Y=420
X=(#ResolutionX# - (630 * #ScaleX#))
Y=(#ResolutionY# - (60 * #ScaleY#))
FontSize=(14 * #ScaleY#)

[MeasureDay]
Measure=Time
Format=%e

[MeterDay]
Meter=String
UpdateDivider=30
MeterStyle=GaugeFontStyle
MeasureName=MeasureDay
; X=1290
; Y=445
X=(#ResolutionX# - (630 * #ScaleX#))
Y=(#ResolutionY# - (35 * #ScaleY#))
FontSize=(16 * #ScaleY#)

; ******************************
; SETTINGS BUTTON
; ******************************


[MeterSettingsGear]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\gear.png
; X=1870
; Y=430
X=(#ResolutionX# - (50 * #ScaleX#))
Y=(#ResolutionY# - (50 * #ScaleY#))
H=(32 * #ScaleY#)
PreserveAspectRatio=1
GreyScale=1
ImageTint=192,192,192,96
; LEFT CLICKING THE GEAR ICON
; 1) Configure the skins to use the Plugin.inc file for Measures
; 2) Open the Plugin.inc file using HWiNFOSharedMemoryViewer.exe
; 3) Refresh the skin (for the change to HWiNFOSourceType to take place)
LeftMouseUpAction=[!WriteKeyValue "Variables" "HWiNFOSourceType" "Plugin" "#@#Config.inc"][!CommandMeasure MeasureOpenHWiNFOSharedMemoryViewer "Run"][!Refresh]
; RIGHT CLICKING THE GEAR ICON
; 1) Configure the skins to use the Registry.inc file for Measures
; 2) Open the Registry.inc file
; 3) Open a command prompt and dump the contents of the HWiNFO64\VSB registry key
; 4) Refresh the skin (for the change to HWiNFOSourceType to take place)
RightMouseUpAction=[!WriteKeyValue "Variables" "HWiNFOSourceType" "Registry" "#@#Config.inc"]["#@#\Registry.inc"]["cmd.exe" "/k reg query HKEY_CURRENT_USER\SOFTWARE\HWiNFO64\VSB"][!Refresh]

; ******************************
; DRIVE MODE SELECTOR BUTTONS
; ******************************

[MeterModeNormalImage]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\DashModeNormal.png
; X=600
; Y=430
X=(#ResolutionX# - (1320 * #ScaleX#))
Y=(#ResolutionY# - (50 * #ScaleY#))
H=(32 * #ScaleY#)
PreserveAspectRatio=1
GreyScale=1

[MeterModeSportPlusImage]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\DashModeSportPlus.png
; X=675
; Y=430
X=(#ResolutionX# - (1245 * #ScaleX#))
Y=(#ResolutionY# - (50 * #ScaleY#))
H=(32 * #ScaleY#)
PreserveAspectRatio=1
GreyScale=1

[MeterModeTrackImage]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\DashModeTrack.png
; X=760
; Y=430
X=(#ResolutionX# - (1160 * #ScaleX#))
Y=(#ResolutionY# - (50 * #ScaleY#))
H=(32 * #ScaleY#)
PreserveAspectRatio=1
GreyScale=1

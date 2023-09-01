[Variables]
ResolutionX=2560
ResolutionY=720
ScaleX=(#ResolutionX# / 1920)
ScaleY=(#ResolutionY# / 480)


; Font Sizes
PrimaryFontSize=20
TachNormalFontSize=32
TachSportPlusFontSize=40
TachTrackFontSize=40
SpeedoFontSize=32

; images
CPUImage=amd.png
GPUImage=nvidia.png
MiscImage=water-temp.png
; specify if we are using the "Plugin" or "Registry"
; this value is set by the LMB(plugin) or RMB(registry) on the gear icon in the skin
HWiNFOSourceType=Plugin

; Gauge colors
BackgroundColor=0,0,0,255
; GaugeLineColor=100,100,255
GaugeLineColor=118,180,0
GaugeLineWidth=4
GaugeLineFillColor=0,0,0
; GaugeShadowColor=30,30,128
GaugeShadowColor=30,60,0
GaugeShadowLineWidth=10
; GaugeRadialFillColor=38,138,252
; GaugeRadialFillColor2=38,138,252,140
GaugeRadialFillColor=118,200,0
GaugeRadialFillColor2=118,200,0,140

; tick lines - redline/overtemp colors
TickColorPrimary=255,255,255
TickColorRed=255,50,50
TickColorOrange=255,172,28

; the active icon in each skin to use ModeImageTintActive
ModeImageTint=255,255,255
ModeImageTintActive=255,172,28

; font
PrimaryFont=Verdana
PrimaryFontColor=255,255,255

[GaugeFontStyle]
FontFace=#PrimaryFont#
FontSize=(#PrimaryFontSize# * #ScaleY#)
FontColor=#PrimaryFontColor#
FontWeight=400
StringAlign=Center

[GaugeFontStyleTachNormal]
FontSize=(#TachNormalFontSize# * #ScaleY#)
FontWeight=100

[GaugeFontStyleTachSportPlus]
FontSize=(#TachSportPlusFontSize# * #ScaleY#)
FontWeight=100

[GaugeFontStyleTachTrack]
FontSize=(#TachTrackFontSize# * #ScaleY#)
FontWeight=100

[GaugeFontStyleSpeedo]
FontSize=(#SpeedoFontSize# * #ScaleY#)
FontWeight=100

[MeasureOpenHWiNFOSharedMemoryViewer]
Measure=Plugin
Plugin=RunCommand
Parameter=HWiNFOSharedMemoryViewer.exe /rmskin="#@#Plugin.inc"
StartInFolder=#@#

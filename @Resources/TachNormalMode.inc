
; The Tachmeter will host the CPU Usage in Normal Mode
; screen is 1920 x 480
; Gauge height will be 440 (480 less 20 padding top & bottom)
; diameter = 440, radius = 220
; Center X = 240 + 20 = 260
; Center Y = 480/2 = 240

[Variables]
TachCenterX=260
TachCenterY=240
TachOuterRadius=220
TachInnerRadius=100

[TachBorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#TachOuterRadius# - (#GaugeShadowLineWidth# / 2))
LineLength=(#TachOuterRadius# + (#GaugeShadowLineWidth# / 2))
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[TachBorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#TachOuterRadius# - (#GaugeLineWidth# / 2))
LineLength=(#TachOuterRadius# + (#GaugeLineWidth# / 2))
LineColor=#GaugeLineColor#
Solid=1
AntiAlias=1

[TachBorderInsideRadius]
Meter=Shape
UpdateDivider=-1
Shape=Ellipse #TachCenterX#,#TachCenterY#,#TachInnerRadius# | Fill Color 0,0,0,0 | Stroke Color #GaugeShadowColor# | StrokeWidth #GaugeShadowLineWidth#
Shape2=Ellipse #TachCenterX#,#TachCenterY#,#TachInnerRadius# | Fill Color 0,0,0,0 | Stroke Color #GaugeLineColor# | StrokeWidth #GaugeLineWidth#

[MeterCPURadialNeedle]
Meter=ROUNDLINE
MeasureName=CPU0Usage
X=#TachCenterX#
Y=#TachCenterY#
LineColor=255,255,255
LineWidth=8
AntiAlias=1
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#TachInnerRadius# + 10)
LineLength=(#TachOuterRadius# - 15)

[MeterCPURadialFill]
Meter=Roundline
MeasureName=CPU0Usage
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#TachInnerRadius# + 10)
LineLength=(#TachOuterRadius# - 15)
Solid=1
AntiAlias=1

[TachTicks]
Meter=Shape
UpdateDivider=-1
; inner radial major ticks
Shape=Line (#TachCenterX# + Sin(Rad(315))*110), (#TachCenterY# + Cos(Rad(315))*110),(#TachCenterX# + Sin(Rad(315))*130), (#TachCenterY# + Cos(Rad(315))*130) | Extend GaugeTickLineThick
Shape2=Line (#TachCenterX# + Sin(Rad(288))*110), (#TachCenterY# + Cos(Rad(288))*110),(#TachCenterX# + Sin(Rad(288))*130), (#TachCenterY# + Cos(Rad(288))*130) | Extend GaugeTickLineThick
Shape3=Line (#TachCenterX# + Sin(Rad(261))*110), (#TachCenterY# + Cos(Rad(261))*110),(#TachCenterX# + Sin(Rad(261))*130), (#TachCenterY# + Cos(Rad(261))*130) | Extend GaugeTickLineThick
Shape4=Line (#TachCenterX# + Sin(Rad(234))*110), (#TachCenterY# + Cos(Rad(234))*110),(#TachCenterX# + Sin(Rad(234))*130), (#TachCenterY# + Cos(Rad(234))*130) | Extend GaugeTickLineThick
Shape5=Line (#TachCenterX# + Sin(Rad(207))*110), (#TachCenterY# + Cos(Rad(207))*110),(#TachCenterX# + Sin(Rad(207))*130), (#TachCenterY# + Cos(Rad(207))*130) | Extend GaugeTickLineThick
Shape6=Line (#TachCenterX# + Sin(Rad(180))*110), (#TachCenterY# + Cos(Rad(180))*110),(#TachCenterX# + Sin(Rad(180))*130), (#TachCenterY# + Cos(Rad(180))*130) | Extend GaugeTickLineThick
Shape7=Line (#TachCenterX# + Sin(Rad(153))*110), (#TachCenterY# + Cos(Rad(153))*110),(#TachCenterX# + Sin(Rad(153))*130), (#TachCenterY# + Cos(Rad(153))*130) | Extend GaugeTickLineThick
Shape8=Line (#TachCenterX# + Sin(Rad(126))*110), (#TachCenterY# + Cos(Rad(126))*110),(#TachCenterX# + Sin(Rad(126))*130), (#TachCenterY# + Cos(Rad(126))*130) | Extend GaugeTickLineThick
Shape9=Line (#TachCenterX# + Sin(Rad(99))*110), (#TachCenterY# + Cos(Rad(99))*110),(#TachCenterX# + Sin(Rad(99))*130), (#TachCenterY# + Cos(Rad(99))*130) | Extend GaugeTickLineThick
Shape10=Line (#TachCenterX# + Sin(Rad(72))*110), (#TachCenterY# + Cos(Rad(72))*110),(#TachCenterX# + Sin(Rad(72))*130), (#TachCenterY# + Cos(Rad(72))*130) | Extend GaugeTickLineThick
Shape11=Line (#TachCenterX# + Sin(Rad(45))*110), (#TachCenterY# + Cos(Rad(45))*110),(#TachCenterX# + Sin(Rad(45))*130), (#TachCenterY# + Cos(Rad(45))*130) | Extend GaugeTickLineThick
; inner radial minor ticks
Shape12=Line (#TachCenterX# + Sin(Rad(302))*110),(#TachCenterY# + Cos(Rad(302))*110),(#TachCenterX# + Sin(Rad(302))*120),(#TachCenterY# + Cos(Rad(302))*120) | Extend GaugeTickLineThin
Shape13=Line (#TachCenterX# + Sin(Rad(275))*110),(#TachCenterY# + Cos(Rad(275))*110),(#TachCenterX# + Sin(Rad(275))*120),(#TachCenterY# + Cos(Rad(275))*120) | Extend GaugeTickLineThin
Shape14=Line (#TachCenterX# + Sin(Rad(248))*110),(#TachCenterY# + Cos(Rad(248))*110),(#TachCenterX# + Sin(Rad(248))*120),(#TachCenterY# + Cos(Rad(248))*120) | Extend GaugeTickLineThin
Shape15=Line (#TachCenterX# + Sin(Rad(221))*110),(#TachCenterY# + Cos(Rad(221))*110),(#TachCenterX# + Sin(Rad(221))*120),(#TachCenterY# + Cos(Rad(221))*120) | Extend GaugeTickLineThin
Shape16=Line (#TachCenterX# + Sin(Rad(194))*110),(#TachCenterY# + Cos(Rad(194))*110),(#TachCenterX# + Sin(Rad(194))*120),(#TachCenterY# + Cos(Rad(194))*120) | Extend GaugeTickLineThin
Shape17=Line (#TachCenterX# + Sin(Rad(167))*110),(#TachCenterY# + Cos(Rad(167))*110),(#TachCenterX# + Sin(Rad(167))*120),(#TachCenterY# + Cos(Rad(167))*120) | Extend GaugeTickLineThin
Shape18=Line (#TachCenterX# + Sin(Rad(140))*110),(#TachCenterY# + Cos(Rad(140))*110),(#TachCenterX# + Sin(Rad(140))*120),(#TachCenterY# + Cos(Rad(140))*120) | Extend GaugeTickLineThin
Shape19=Line (#TachCenterX# + Sin(Rad(113))*110),(#TachCenterY# + Cos(Rad(113))*110),(#TachCenterX# + Sin(Rad(113))*120),(#TachCenterY# + Cos(Rad(113))*120) | Extend GaugeTickLineThin
Shape20=Line (#TachCenterX# + Sin(Rad(86))*110),(#TachCenterY# + Cos(Rad(86))*110),(#TachCenterX# + Sin(Rad(86))*120),(#TachCenterY# + Cos(Rad(86))*120) | Extend GaugeTickLineThin
Shape21=Line (#TachCenterX# + Sin(Rad(59))*110),(#TachCenterY# + Cos(Rad(59))*110),(#TachCenterX# + Sin(Rad(59))*120),(#TachCenterY# + Cos(Rad(59))*120) | Extend GaugeTickLineThin
; outer radial major ticks
Shape22=Line (#TachCenterX# + Sin(Rad(315))*190),(#TachCenterY# + Cos(Rad(315))*190),(#TachCenterX# + Sin(Rad(315))*210),(#TachCenterY# + Cos(Rad(315))*210) | Extend GaugeTickLineThick
Shape23=Line (#TachCenterX# + Sin(Rad(288))*190),(#TachCenterY# + Cos(Rad(288))*190),(#TachCenterX# + Sin(Rad(288))*210),(#TachCenterY# + Cos(Rad(288))*210) | Extend GaugeTickLineThick
Shape24=Line (#TachCenterX# + Sin(Rad(261))*190),(#TachCenterY# + Cos(Rad(261))*190),(#TachCenterX# + Sin(Rad(261))*210),(#TachCenterY# + Cos(Rad(261))*210) | Extend GaugeTickLineThick
Shape25=Line (#TachCenterX# + Sin(Rad(234))*190),(#TachCenterY# + Cos(Rad(234))*190),(#TachCenterX# + Sin(Rad(234))*210),(#TachCenterY# + Cos(Rad(234))*210) | Extend GaugeTickLineThick
Shape26=Line (#TachCenterX# + Sin(Rad(207))*190),(#TachCenterY# + Cos(Rad(207))*190),(#TachCenterX# + Sin(Rad(207))*210),(#TachCenterY# + Cos(Rad(207))*210) | Extend GaugeTickLineThick
Shape27=Line (#TachCenterX# + Sin(Rad(180))*190),(#TachCenterY# + Cos(Rad(180))*190),(#TachCenterX# + Sin(Rad(180))*210),(#TachCenterY# + Cos(Rad(180))*210) | Extend GaugeTickLineThick
Shape28=Line (#TachCenterX# + Sin(Rad(153))*190),(#TachCenterY# + Cos(Rad(153))*190),(#TachCenterX# + Sin(Rad(153))*210),(#TachCenterY# + Cos(Rad(153))*210) | Extend GaugeTickLineThick
Shape29=Line (#TachCenterX# + Sin(Rad(126))*190),(#TachCenterY# + Cos(Rad(126))*190),(#TachCenterX# + Sin(Rad(126))*210),(#TachCenterY# + Cos(Rad(126))*210) | Extend GaugeTickLineThick
Shape30=Line (#TachCenterX# + Sin(Rad(99))*190),(#TachCenterY# + Cos(Rad(99))*190),(#TachCenterX# + Sin(Rad(99))*210),(#TachCenterY# + Cos(Rad(99))*210) | Extend GaugeTickLineThick
Shape31=Line (#TachCenterX# + Sin(Rad(72))*190),(#TachCenterY# + Cos(Rad(72))*190),(#TachCenterX# + Sin(Rad(72))*210),(#TachCenterY# + Cos(Rad(72))*210) | Extend GaugeTickLineThick
Shape32=Line (#TachCenterX# + Sin(Rad(45))*190),(#TachCenterY# + Cos(Rad(45))*190),(#TachCenterX# + Sin(Rad(45))*210),(#TachCenterY# + Cos(Rad(45))*210) | Extend GaugeTickLineThick
; outer radial major 1/2 ticks
Shape33=Line (#TachCenterX# + Sin(Rad(302))*195),(#TachCenterY# + Cos(Rad(302))*195),(#TachCenterX# + Sin(Rad(302))*210),(#TachCenterY# + Cos(Rad(302))*210) | Extend GaugeTickLineThick
Shape34=Line (#TachCenterX# + Sin(Rad(275))*195),(#TachCenterY# + Cos(Rad(275))*195),(#TachCenterX# + Sin(Rad(275))*210),(#TachCenterY# + Cos(Rad(275))*210) | Extend GaugeTickLineThick
Shape35=Line (#TachCenterX# + Sin(Rad(248))*195),(#TachCenterY# + Cos(Rad(248))*195),(#TachCenterX# + Sin(Rad(248))*210),(#TachCenterY# + Cos(Rad(248))*210) | Extend GaugeTickLineThick
Shape36=Line (#TachCenterX# + Sin(Rad(221))*195),(#TachCenterY# + Cos(Rad(221))*195),(#TachCenterX# + Sin(Rad(221))*210),(#TachCenterY# + Cos(Rad(221))*210) | Extend GaugeTickLineThick
Shape37=Line (#TachCenterX# + Sin(Rad(194))*195),(#TachCenterY# + Cos(Rad(194))*195),(#TachCenterX# + Sin(Rad(194))*210),(#TachCenterY# + Cos(Rad(194))*210) | Extend GaugeTickLineThick
Shape38=Line (#TachCenterX# + Sin(Rad(167))*195),(#TachCenterY# + Cos(Rad(167))*195),(#TachCenterX# + Sin(Rad(167))*210),(#TachCenterY# + Cos(Rad(167))*210) | Extend GaugeTickLineThick
Shape39=Line (#TachCenterX# + Sin(Rad(140))*195),(#TachCenterY# + Cos(Rad(140))*195),(#TachCenterX# + Sin(Rad(140))*210),(#TachCenterY# + Cos(Rad(140))*210) | Extend GaugeTickLineThick
Shape40=Line (#TachCenterX# + Sin(Rad(113))*195),(#TachCenterY# + Cos(Rad(113))*195),(#TachCenterX# + Sin(Rad(113))*210),(#TachCenterY# + Cos(Rad(113))*210) | Extend GaugeTickLineThick
Shape41=Line (#TachCenterX# + Sin(Rad(86))*195),(#TachCenterY# + Cos(Rad(86))*195),(#TachCenterX# + Sin(Rad(86))*210),(#TachCenterY# + Cos(Rad(86))*210) | Extend GaugeTickLineThick
Shape42=Line (#TachCenterX# + Sin(Rad(59))*195),(#TachCenterY# + Cos(Rad(59))*195),(#TachCenterX# + Sin(Rad(59))*210),(#TachCenterY# + Cos(Rad(59))*210) | Extend GaugeTickLineThick
; outer radial minor ticks
Shape43=Line (#TachCenterX# + Sin(Rad(308))*200),(#TachCenterY# + Cos(Rad(308))*200),(#TachCenterX# + Sin(Rad(308))*210),(#TachCenterY# + Cos(Rad(308))*210) | Extend GaugeTickLineThin
Shape44=Line (#TachCenterX# + Sin(Rad(295))*200),(#TachCenterY# + Cos(Rad(295))*200),(#TachCenterX# + Sin(Rad(295))*210),(#TachCenterY# + Cos(Rad(295))*210) | Extend GaugeTickLineThin
Shape45=Line (#TachCenterX# + Sin(Rad(281))*200),(#TachCenterY# + Cos(Rad(281))*200),(#TachCenterX# + Sin(Rad(281))*210),(#TachCenterY# + Cos(Rad(281))*210) | Extend GaugeTickLineThin
Shape46=Line (#TachCenterX# + Sin(Rad(268))*200),(#TachCenterY# + Cos(Rad(268))*200),(#TachCenterX# + Sin(Rad(268))*210),(#TachCenterY# + Cos(Rad(268))*210) | Extend GaugeTickLineThin
Shape47=Line (#TachCenterX# + Sin(Rad(254))*200),(#TachCenterY# + Cos(Rad(254))*200),(#TachCenterX# + Sin(Rad(254))*210),(#TachCenterY# + Cos(Rad(254))*210) | Extend GaugeTickLineThin
Shape48=Line (#TachCenterX# + Sin(Rad(241))*200),(#TachCenterY# + Cos(Rad(241))*200),(#TachCenterX# + Sin(Rad(241))*210),(#TachCenterY# + Cos(Rad(241))*210) | Extend GaugeTickLineThin
Shape49=Line (#TachCenterX# + Sin(Rad(227))*200),(#TachCenterY# + Cos(Rad(227))*200),(#TachCenterX# + Sin(Rad(227))*210),(#TachCenterY# + Cos(Rad(227))*210) | Extend GaugeTickLineThin
Shape50=Line (#TachCenterX# + Sin(Rad(214))*200),(#TachCenterY# + Cos(Rad(214))*200),(#TachCenterX# + Sin(Rad(214))*210),(#TachCenterY# + Cos(Rad(214))*210) | Extend GaugeTickLineThin
Shape51=Line (#TachCenterX# + Sin(Rad(200))*200),(#TachCenterY# + Cos(Rad(200))*200),(#TachCenterX# + Sin(Rad(200))*210),(#TachCenterY# + Cos(Rad(200))*210) | Extend GaugeTickLineThin
Shape52=Line (#TachCenterX# + Sin(Rad(187))*200),(#TachCenterY# + Cos(Rad(187))*200),(#TachCenterX# + Sin(Rad(187))*210),(#TachCenterY# + Cos(Rad(187))*210) | Extend GaugeTickLineThin
Shape53=Line (#TachCenterX# + Sin(Rad(173))*200),(#TachCenterY# + Cos(Rad(173))*200),(#TachCenterX# + Sin(Rad(173))*210),(#TachCenterY# + Cos(Rad(173))*210) | Extend GaugeTickLineThin
Shape54=Line (#TachCenterX# + Sin(Rad(160))*200),(#TachCenterY# + Cos(Rad(160))*200),(#TachCenterX# + Sin(Rad(160))*210),(#TachCenterY# + Cos(Rad(160))*210) | Extend GaugeTickLineThin
Shape55=Line (#TachCenterX# + Sin(Rad(146))*200),(#TachCenterY# + Cos(Rad(146))*200),(#TachCenterX# + Sin(Rad(146))*210),(#TachCenterY# + Cos(Rad(146))*210) | Extend GaugeTickLineThin
Shape56=Line (#TachCenterX# + Sin(Rad(133))*200),(#TachCenterY# + Cos(Rad(133))*200),(#TachCenterX# + Sin(Rad(133))*210),(#TachCenterY# + Cos(Rad(133))*210) | Extend GaugeTickLineThin
Shape57=Line (#TachCenterX# + Sin(Rad(119))*200),(#TachCenterY# + Cos(Rad(119))*200),(#TachCenterX# + Sin(Rad(119))*210),(#TachCenterY# + Cos(Rad(119))*210) | Extend GaugeTickLineThin
Shape58=Line (#TachCenterX# + Sin(Rad(106))*200),(#TachCenterY# + Cos(Rad(106))*200),(#TachCenterX# + Sin(Rad(106))*210),(#TachCenterY# + Cos(Rad(106))*210) | Extend GaugeTickLineThin
Shape59=Line (#TachCenterX# + Sin(Rad(92))*200),(#TachCenterY# + Cos(Rad(92))*200),(#TachCenterX# + Sin(Rad(92))*210),(#TachCenterY# + Cos(Rad(92))*210) | Extend GaugeTickLineThin
Shape60=Line (#TachCenterX# + Sin(Rad(79))*200),(#TachCenterY# + Cos(Rad(79))*200),(#TachCenterX# + Sin(Rad(79))*210),(#TachCenterY# + Cos(Rad(79))*210) | Extend GaugeTickLineThin
Shape61=Line (#TachCenterX# + Sin(Rad(65))*200),(#TachCenterY# + Cos(Rad(65))*200),(#TachCenterX# + Sin(Rad(65))*210),(#TachCenterY# + Cos(Rad(65))*210) | Extend GaugeTickLineThin
Shape62=Line (#TachCenterX# + Sin(Rad(52))*200),(#TachCenterY# + Cos(Rad(52))*200),(#TachCenterX# + Sin(Rad(52))*210),(#TachCenterY# + Cos(Rad(52))*210) | Extend GaugeTickLineThin
; line styles
GaugeTickLineThin=StrokeWidth 2 | StrokeColor 255,255,255 | Fill Color 255,255,255
GaugeTickLineThick=StrokeWidth 4 | StrokeColor 255,255,255 | Fill Color 255,255,255

[MeterTach0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# - 112)
Y=(#TachCenterY# + 82)
Text=0

[MeterTach1]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# - 150)
Y=(#TachCenterY# + 20)
Text=1

[MeterTach2]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# - 157)
Y=(#TachCenterY# - 53)
Text=2

[MeterTach3]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# - 130)
Y=(#TachCenterY# - 122)
Text=3

[MeterTach4]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# - 73)
Y=(#TachCenterY# - 170)
Text=4

[MeterTach5]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=#TachCenterX#
Y=(#TachCenterY# - 188)
Text=5

[MeterTach6]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# +73)
Y=(#TachCenterY# - 170)
Text=6

[MeterTach7]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# +130)
Y=(#TachCenterY# - 122)
Text=7

[MeterTach8]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# + 157)
Y=(#TachCenterY# - 53)
Text=8

[MeterTach9]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# + 150)
Y=(#TachCenterY# + 20)
Text=9

[MeterTach10]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachNormal
X=(#TachCenterX# + 112)
Y=(#TachCenterY# + 84)
Text=10

[TachRAMRadius]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(60))
RotationAngle=(Rad(60))
LineStart=(#TachOuterRadius# - 1)
LineLength=(#TachOuterRadius# + 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterRAMRadialNeedle]
Meter=ROUNDLINE
MeasureName=RAMUsage
X=#TachCenterX#
Y=#TachCenterY#
LineColor=255, 255, 255
LineWidth=6
AntiAlias=1
StartAngle=(Rad(120))
RotationAngle=(Rad(-60))
LineStart=(#TachOuterRadius#)
LineLength=(#TachOuterRadius#-20)
ValueRemainder=100

[MeterRAMRadialFill]
Meter=Roundline
MeasureName=RAMUsage
X=#TachCenterX#
Y=#TachCenterY#
LineColor=#GaugeRadialFillColor2#
StartAngle=(Rad(120))
RotationAngle=(Rad(-60))
LineStart=(#TachOuterRadius#)
LineLength=(#TachOuterRadius# - 20)
Solid=1
AntiAlias=1
ValueRemainder=100

[GaugeRAMTicks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#TachCenterX# + Sin(Rad(-30))*#TachOuterRadius#),(#TachCenterY# + Cos(Rad(-30))*#TachOuterRadius#),(#TachCenterX# + Sin(Rad(-30))*(#TachOuterRadius#-25)),(#TachCenterY# + Cos(Rad(-30))*(#TachOuterRadius#-25)) | Extend GaugeTickLineThick
Shape2=Line (#TachCenterX# + Sin(Rad(0))*(#TachOuterRadius#-8)),(#TachCenterY# + Cos(Rad(0))*(#TachOuterRadius#-8)),(#TachCenterX# + Sin(Rad(0))*(#TachOuterRadius#-25)),(#TachCenterY# + Cos(Rad(0))*(#TachOuterRadius#-25)) | Extend GaugeTickLineThick
Shape3=Line (#TachCenterX# + Sin(Rad(30))*#TachOuterRadius#),(#TachCenterY# + Cos(Rad(30))*#TachOuterRadius#),(#TachCenterX# + Sin(Rad(30))*(#TachOuterRadius#-25)),(#TachCenterY# + Cos(Rad(30))*(#TachOuterRadius#-25)) | Extend GaugeTickLineThick
; minor ticks
Shape4=Line (#TachCenterX# + Sin(Rad(-15))*(#TachOuterRadius#-15)),(#TachCenterY# + Cos(Rad(-15))*(#TachOuterRadius#-15)),(#TachCenterX# + Sin(Rad(-15))*(#TachOuterRadius#-30)),(#TachCenterY# + Cos(Rad(-15))*(#TachOuterRadius#-30)) | Extend GaugeTickLineThin
Shape5=Line (#TachCenterX# + Sin(Rad(15))*(#TachOuterRadius#-15)),(#TachCenterY# + Cos(Rad(15))*(#TachOuterRadius#-15)),(#TachCenterX# + Sin(Rad(15))*(#TachOuterRadius#-30)),(#TachCenterY# + Cos(Rad(15))*(#TachOuterRadius#-30)) | Extend GaugeTickLineThin
; line styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255

[MeterStringRAM]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=#TachCenterX#
Y=(#TachCenterY# + #TachOuterRadius# - 70)
FontSize=18
FontWeight=400
Text=RAM %

[MeterStringCPULabel]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=#TachCenterX#
Y=160
FontSize=24
FontWeight=100
Text=CPU

[MeterStringCPUUsage]
Meter=String
MeasureName=CPU0Usage
MeterStyle=GaugeFontStyle
X=#TachCenterX#
Y=200
FontSize=68
FontWeight=400
Text="%1"


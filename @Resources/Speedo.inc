
; The speedometer will host the GPU Usage in Normal & Sport+ modes
; screen is 1920 x 480
; Gauge height will be 440 (480 less 20 padding top & bottom)
; diameter = 440, radius = 220
; Center X = 1920 - 20 - 240 = 1660
; Center Y = 480/2 = 240

; screen is 2560 x 720
; Gauge height will be 680 (720 less 20 padding top & bottom)
; diameter = 680, radius = 340
; Center X = 2560 - 20 - 360 = 2180
; Center Y = 720/2 = 360

[Variables]
; SpeedoCenterX=1660
; SpeedoCenterY=240
; SpeedoOuterRadius=220
; SpeedoInnerRadius=100
SpeedoCenterX=(#ResolutionX# - (260 * #ScaleX#))
SpeedoCenterY=(#ResolutionY# - (240 * #ScaleY#))
SpeedoOuterRadius=((#ResolutionY# / 2) - (20 * #ScaleY#))
SpeedoInnerRadius=((#ResolutionY# / 4) - (20 * #ScaleY#))

[SpeedoBorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#SpeedoOuterRadius# - (#GaugeShadowLineWidth# / 2))
LineLength=(#SpeedoOuterRadius# + (#GaugeShadowLineWidth# / 2))
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[SpeedoBorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#SpeedoOuterRadius# - (#GaugeLineWidth# / 2))
LineLength=(#SpeedoOuterRadius# + (#GaugeLineWidth# / 2))
LineColor=#GaugeLineColor#
Solid=1
AntiAlias=1

[SpeedoBorderInsideRadius]
Meter=Shape
UpdateDivider=-1
Shape=Ellipse #SpeedoCenterX#,#SpeedoCenterY#,#SpeedoInnerRadius# | Fill Color 0,0,0,0 | Stroke Color #GaugeShadowColor# | StrokeWidth #GaugeShadowLineWidth#
Shape2=Ellipse #SpeedoCenterX#,#SpeedoCenterY#,#SpeedoInnerRadius# | Fill Color 0,0,0,0 | Stroke Color #GaugeLineColor# | StrokeWidth #GaugeLineWidth#

[MeterGPURadialNeedle]
Meter=ROUNDLINE
MeasureName=GPU0Usage
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
LineColor=255,255,255
LineWidth=(8*#ScaleY#)
AntiAlias=1
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#SpeedoInnerRadius# + 10)
LineLength=(#SpeedoOuterRadius# - 15)

[MeterGPURadialFill]
Meter=Roundline
MeasureName=GPU0Usage
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#SpeedoInnerRadius# + 10)
LineLength=(#SpeedoOuterRadius# - 15)
Solid=1
AntiAlias=1

[SpeedoTicks]
Meter=Shape
UpdateDivider=-1
; inner radial major ticks
; Shape=Line (#SpeedoCenterX# + Sin(Rad(315))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(315))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(315))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(315))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape2=Line (#SpeedoCenterX# + Sin(Rad(288))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(288))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(288))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(288))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape3=Line (#SpeedoCenterX# + Sin(Rad(261))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(261))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(261))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(261))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape4=Line (#SpeedoCenterX# + Sin(Rad(234))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(234))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(234))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(234))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape5=Line (#SpeedoCenterX# + Sin(Rad(207))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(207))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(207))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(207))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape6=Line (#SpeedoCenterX# + Sin(Rad(180))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(180))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(180))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(180))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape7=Line (#SpeedoCenterX# + Sin(Rad(153))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(153))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(153))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(153))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape8=Line (#SpeedoCenterX# + Sin(Rad(126))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(126))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(126))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(126))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape9=Line (#SpeedoCenterX# + Sin(Rad(99))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(99))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(99))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(99))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape10=Line (#SpeedoCenterX# + Sin(Rad(72))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(72))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(72))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(72))*130*#ScaleY#) | Extend GaugeTickLineThick
; Shape11=Line (#SpeedoCenterX# + Sin(Rad(45))*110*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(45))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(45))*130*#ScaleX#), (#SpeedoCenterY# + Cos(Rad(45))*130*#ScaleY#) | Extend GaugeTickLineThick

Shape=Line (#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape2=Line (#SpeedoCenterX# + Sin(Rad(288))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(288))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(288))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(288))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape3=Line (#SpeedoCenterX# + Sin(Rad(261))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(261))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(261))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(261))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape4=Line (#SpeedoCenterX# + Sin(Rad(234))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(234))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(234))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(234))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape5=Line (#SpeedoCenterX# + Sin(Rad(207))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(207))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(207))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(207))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape6=Line (#SpeedoCenterX# + Sin(Rad(180))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(180))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(180))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(180))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape7=Line (#SpeedoCenterX# + Sin(Rad(153))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(153))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(153))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(153))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape8=Line (#SpeedoCenterX# + Sin(Rad(126))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(126))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(126))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(126))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape9=Line (#SpeedoCenterX# + Sin(Rad(99))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(99))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(99))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(99))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape10=Line (#SpeedoCenterX# + Sin(Rad(72))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(72))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(72))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(72))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape11=Line (#SpeedoCenterX# + Sin(Rad(45))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(45))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(45))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(45))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick

; inner radial minor ticks
; Shape12=Line (#SpeedoCenterX# + Sin(Rad(302))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(302))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(302))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(302))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape13=Line (#SpeedoCenterX# + Sin(Rad(275))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(275))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(275))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(275))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape14=Line (#SpeedoCenterX# + Sin(Rad(248))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(248))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(248))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(248))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape15=Line (#SpeedoCenterX# + Sin(Rad(221))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(221))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(221))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(221))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape16=Line (#SpeedoCenterX# + Sin(Rad(194))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(194))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(194))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(194))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape17=Line (#SpeedoCenterX# + Sin(Rad(167))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(167))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(167))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(167))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape18=Line (#SpeedoCenterX# + Sin(Rad(140))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(140))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(140))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(140))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape19=Line (#SpeedoCenterX# + Sin(Rad(113))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(113))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(113))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(113))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape20=Line (#SpeedoCenterX# + Sin(Rad(86))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(86))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(86))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(86))*120*#ScaleY#) | Extend GaugeTickLineThin
; Shape21=Line (#SpeedoCenterX# + Sin(Rad(59))*110*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(59))*110*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(59))*120*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(59))*120*#ScaleY#) | Extend GaugeTickLineThin
Shape12=Line (#SpeedoCenterX# + Sin(Rad(302))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(302))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(302))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(302))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape13=Line (#SpeedoCenterX# + Sin(Rad(275))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(275))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(275))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(275))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape14=Line (#SpeedoCenterX# + Sin(Rad(248))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(248))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(248))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(248))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape15=Line (#SpeedoCenterX# + Sin(Rad(221))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(221))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(221))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(221))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape16=Line (#SpeedoCenterX# + Sin(Rad(194))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(194))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(194))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(194))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape17=Line (#SpeedoCenterX# + Sin(Rad(167))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(167))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(167))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(167))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape18=Line (#SpeedoCenterX# + Sin(Rad(140))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(140))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(140))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(140))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape19=Line (#SpeedoCenterX# + Sin(Rad(113))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(113))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(113))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(113))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape20=Line (#SpeedoCenterX# + Sin(Rad(86))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(86))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(86))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(86))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape21=Line (#SpeedoCenterX# + Sin(Rad(59))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(59))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(59))*(#SpeedoInnerRadius#+(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(59))*(#SpeedoInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin

; outer radial major ticks
;Shape22=Line (#SpeedoCenterX# + Sin(Rad(315))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(315))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(315))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(315))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape23=Line (#SpeedoCenterX# + Sin(Rad(288))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(288))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(288))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(288))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape24=Line (#SpeedoCenterX# + Sin(Rad(261))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(261))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(261))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(261))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape25=Line (#SpeedoCenterX# + Sin(Rad(234))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(234))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(234))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(234))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape26=Line (#SpeedoCenterX# + Sin(Rad(207))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(207))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(207))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(207))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape27=Line (#SpeedoCenterX# + Sin(Rad(180))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(180))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(180))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(180))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape28=Line (#SpeedoCenterX# + Sin(Rad(153))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(153))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(153))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(153))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape29=Line (#SpeedoCenterX# + Sin(Rad(126))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(126))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(126))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(126))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape30=Line (#SpeedoCenterX# + Sin(Rad(99))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(99))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(99))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(99))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape31=Line (#SpeedoCenterX# + Sin(Rad(72))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(72))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(72))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(72))*210*#ScaleY#) | Extend GaugeTickLineThick  
; Shape32=Line (#SpeedoCenterX# + Sin(Rad(45))*190*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(45))*190*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(45))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(45))*210*#ScaleY#) | Extend GaugeTickLineThick  
Shape22=Line (#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape23=Line (#SpeedoCenterX# + Sin(Rad(288))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(288))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(288))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(288))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape24=Line (#SpeedoCenterX# + Sin(Rad(261))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(261))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(261))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(261))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape25=Line (#SpeedoCenterX# + Sin(Rad(234))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(234))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(234))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(234))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape26=Line (#SpeedoCenterX# + Sin(Rad(207))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(207))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(207))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(207))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape27=Line (#SpeedoCenterX# + Sin(Rad(180))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(180))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(180))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(180))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape28=Line (#SpeedoCenterX# + Sin(Rad(153))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(153))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(153))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(153))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape29=Line (#SpeedoCenterX# + Sin(Rad(126))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(126))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(126))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(126))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape30=Line (#SpeedoCenterX# + Sin(Rad(99))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(99))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(99))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(99))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape31=Line (#SpeedoCenterX# + Sin(Rad(72))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(72))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(72))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(72))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape32=Line (#SpeedoCenterX# + Sin(Rad(45))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(45))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(45))*(#SpeedoOuterRadius#-(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(45))*(#SpeedoOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick

; outer radial major 1/2 ticks
; Shape33=Line (#SpeedoCenterX# + Sin(Rad(302))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(302))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(302))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(302))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape34=Line (#SpeedoCenterX# + Sin(Rad(275))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(275))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(275))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(275))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape35=Line (#SpeedoCenterX# + Sin(Rad(248))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(248))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(248))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(248))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape36=Line (#SpeedoCenterX# + Sin(Rad(221))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(221))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(221))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(221))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape37=Line (#SpeedoCenterX# + Sin(Rad(194))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(194))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(194))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(194))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape38=Line (#SpeedoCenterX# + Sin(Rad(167))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(167))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(167))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(167))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape39=Line (#SpeedoCenterX# + Sin(Rad(140))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(140))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(140))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(140))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape40=Line (#SpeedoCenterX# + Sin(Rad(113))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(113))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(113))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(113))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape41=Line (#SpeedoCenterX# + Sin(Rad(86))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(86))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(86))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(86))*210*#ScaleY#) | Extend GaugeTickLineThick
; Shape42=Line (#SpeedoCenterX# + Sin(Rad(59))*195*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(59))*195*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(59))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(59))*210*#ScaleY#) | Extend GaugeTickLineThick

Shape33=Line (#SpeedoCenterX# + Sin(Rad(302))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(302))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(302))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(302))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape34=Line (#SpeedoCenterX# + Sin(Rad(275))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(275))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(275))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(275))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape35=Line (#SpeedoCenterX# + Sin(Rad(248))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(248))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(248))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(248))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape36=Line (#SpeedoCenterX# + Sin(Rad(221))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(221))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(221))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(221))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape37=Line (#SpeedoCenterX# + Sin(Rad(194))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(194))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(194))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(194))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape38=Line (#SpeedoCenterX# + Sin(Rad(167))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(167))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(167))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(167))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape39=Line (#SpeedoCenterX# + Sin(Rad(140))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(140))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(140))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(140))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape40=Line (#SpeedoCenterX# + Sin(Rad(113))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(113))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(113))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(113))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape41=Line (#SpeedoCenterX# + Sin(Rad(86))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(86))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(86))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(86))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick
Shape42=Line (#SpeedoCenterX# + Sin(Rad(59))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(59))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(59))*(#SpeedoOuterRadius#-(25*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(59))*(#SpeedoOuterRadius#-(25*#ScaleY#))) | Extend GaugeTickLineThick

; outer radial minor ticks
; Shape43=Line (#SpeedoCenterX# + Sin(Rad(308))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(308))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(308))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(308))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape44=Line (#SpeedoCenterX# + Sin(Rad(295))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(295))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(295))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(295))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape45=Line (#SpeedoCenterX# + Sin(Rad(281))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(281))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(281))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(281))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape46=Line (#SpeedoCenterX# + Sin(Rad(268))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(268))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(268))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(268))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape47=Line (#SpeedoCenterX# + Sin(Rad(254))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(254))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(254))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(254))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape48=Line (#SpeedoCenterX# + Sin(Rad(241))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(241))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(241))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(241))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape49=Line (#SpeedoCenterX# + Sin(Rad(227))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(227))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(227))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(227))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape50=Line (#SpeedoCenterX# + Sin(Rad(214))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(214))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(214))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(214))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape51=Line (#SpeedoCenterX# + Sin(Rad(200))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(200))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(200))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(200))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape52=Line (#SpeedoCenterX# + Sin(Rad(187))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(187))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(187))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(187))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape53=Line (#SpeedoCenterX# + Sin(Rad(173))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(173))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(173))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(173))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape54=Line (#SpeedoCenterX# + Sin(Rad(160))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(160))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(160))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(160))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape55=Line (#SpeedoCenterX# + Sin(Rad(146))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(146))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(146))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(146))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape56=Line (#SpeedoCenterX# + Sin(Rad(133))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(133))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(133))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(133))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape57=Line (#SpeedoCenterX# + Sin(Rad(119))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(119))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(119))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(119))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape58=Line (#SpeedoCenterX# + Sin(Rad(106))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(106))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(106))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(106))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape59=Line (#SpeedoCenterX# + Sin(Rad(92))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(92))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(92))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(92))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape60=Line (#SpeedoCenterX# + Sin(Rad(79))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(79))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(79))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(79))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape61=Line (#SpeedoCenterX# + Sin(Rad(65))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(65))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(65))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(65))*210*#ScaleY#) | Extend GaugeTickLineThin
; Shape62=Line (#SpeedoCenterX# + Sin(Rad(52))*200*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(52))*200*#ScaleY#),(#SpeedoCenterX# + Sin(Rad(52))*210*#ScaleX#),(#SpeedoCenterY# + Cos(Rad(52))*210*#ScaleY#) | Extend GaugeTickLineThin

Shape43=Line (#SpeedoCenterX# + Sin(Rad(308))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(308))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(308))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(308))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape44=Line (#SpeedoCenterX# + Sin(Rad(295))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(295))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(295))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(295))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape45=Line (#SpeedoCenterX# + Sin(Rad(281))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(281))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(281))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(281))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape46=Line (#SpeedoCenterX# + Sin(Rad(268))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(268))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(268))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(268))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape47=Line (#SpeedoCenterX# + Sin(Rad(254))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(254))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(254))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(254))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape48=Line (#SpeedoCenterX# + Sin(Rad(241))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(241))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(241))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(241))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape49=Line (#SpeedoCenterX# + Sin(Rad(227))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(227))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(227))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(227))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape50=Line (#SpeedoCenterX# + Sin(Rad(214))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(214))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(214))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(214))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape51=Line (#SpeedoCenterX# + Sin(Rad(200))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(200))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(200))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(200))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape52=Line (#SpeedoCenterX# + Sin(Rad(187))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(187))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(187))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(187))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape53=Line (#SpeedoCenterX# + Sin(Rad(173))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(173))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(173))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(173))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape54=Line (#SpeedoCenterX# + Sin(Rad(160))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(160))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(160))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(160))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape55=Line (#SpeedoCenterX# + Sin(Rad(146))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(146))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(146))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(146))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape56=Line (#SpeedoCenterX# + Sin(Rad(133))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(133))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(133))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(133))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape57=Line (#SpeedoCenterX# + Sin(Rad(119))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(119))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(119))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(119))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape58=Line (#SpeedoCenterX# + Sin(Rad(106))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(106))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(106))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(106))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape59=Line (#SpeedoCenterX# + Sin(Rad(92))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(92))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(92))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(92))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape60=Line (#SpeedoCenterX# + Sin(Rad(79))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(79))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(79))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(79))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape61=Line (#SpeedoCenterX# + Sin(Rad(65))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(65))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(65))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(65))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape62=Line (#SpeedoCenterX# + Sin(Rad(52))*(#SpeedoOuterRadius#-(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(52))*(#SpeedoOuterRadius#-(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(52))*(#SpeedoOuterRadius#-(20*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(52))*(#SpeedoOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin

; line styles
GaugeTickLineThin=StrokeWidth 2 | StrokeColor 255,255,255 | Fill Color 255,255,255
GaugeTickLineThick=StrokeWidth 4 | StrokeColor 255,255,255 | Fill Color 255,255,255

[MeterSpeedo0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# - ((112 + ((#SpeedoFontSize# * #ScaleY#) * (#ScaleX# - 1))) * #ScaleX#))
;Y=(#SpeedoCenterY# + (84 * #ScaleY#))
;X=(#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoOuterRadius#))
X=(#SpeedoCenterX# + ((Sin(Rad(315))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Sin(Rad(315))*(#SpeedoInnerRadius#-(30*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(308))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(308))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=0

[MeterSpeedo1]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# - 150)
; Y=(#SpeedoCenterY# + 20)
; X=(#SpeedoCenterX# - ((150 + ((#SpeedoFontSize# * #ScaleY#) * (#ScaleX# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# + (20 * #ScaleY#))
X=(#SpeedoCenterX# + ((Sin(Rad(285))*(#SpeedoOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(285))*(#SpeedoInnerRadius#-(18*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(278))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(278))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=1

[MeterSpeedo2]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# - 157)
; Y=(#SpeedoCenterY# - 53)
; X=(#SpeedoCenterX# - ((157 + ((#SpeedoFontSize# * #ScaleX#) * (#ScaleY# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# - (53 * #ScaleY#))
X=(#SpeedoCenterX# + ((Sin(Rad(263))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Sin(Rad(263))*(#SpeedoInnerRadius#-(30*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(248))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(248))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=2

[MeterSpeedo3]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# - 130)
; Y=(#SpeedoCenterY# - 122)
; X=(#SpeedoCenterX# - ((130 + ((#SpeedoFontSize# * #ScaleY#) * (#ScaleX# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# - (122 * #ScaleY#))
X=(#SpeedoCenterX# + ((Sin(Rad(235))*(#SpeedoOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(235))*(#SpeedoInnerRadius#-(18*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(210))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(210))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=3

[MeterSpeedo4]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# - 73)
; Y=(#SpeedoCenterY# - 170)
; X=(#SpeedoCenterX# - ((73 + ((#SpeedoFontSize# * #ScaleX#) * (#ScaleX# - 1))) * #ScaleX#))
X=(#SpeedoCenterX# + ((Sin(Rad(209))*(#SpeedoOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(209))*(#SpeedoInnerRadius#-(18*#ScaleY#)))))
Y=(#SpeedoCenterY# - (170 * #ScaleY#))
Text=4

[MeterSpeedo5]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=#SpeedoCenterX#
; Y=(#SpeedoCenterY# - 188)
X=(#SpeedoCenterX# )
Y=(#SpeedoCenterY# - (188 * #ScaleY#))
Text=5

[MeterSpeedo6]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# +73)
; Y=(#SpeedoCenterY# - 170)
X=(#SpeedoCenterX# - ((Sin(Rad(209))*(#SpeedoOuterRadius#+(15*#ScaleY#))) - (Sin(Rad(209))*(#SpeedoInnerRadius#-(15*#ScaleY#)))))
Y=(#SpeedoCenterY# - (170 * #ScaleY#))
Text=6

[MeterSpeedo7]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# +130)
; Y=(#SpeedoCenterY# - 122)
X=(#SpeedoCenterX# - ((Sin(Rad(235))*(#SpeedoOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(235))*(#SpeedoInnerRadius#-(18*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(210))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(210))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=7

[MeterSpeedo8]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# + 157)
; Y=(#SpeedoCenterY# - 53)
; X=(#SpeedoCenterX# + ((157 + ((#SpeedoFontSize# * #ScaleX#) * (#ScaleY# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# - (53 * #ScaleY#))
X=(#SpeedoCenterX# - ((Sin(Rad(263))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Sin(Rad(263))*(#SpeedoInnerRadius#-(30*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(248))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(248))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=8

[MeterSpeedo9]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# + 150)
; Y=(#SpeedoCenterY# + 20)
; X=(#SpeedoCenterX# + ((150 + ((#SpeedoFontSize# * #ScaleX#) * (#ScaleY# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# + (20 * #ScaleY#))
X=(#SpeedoCenterX# - ((Sin(Rad(285))*(#SpeedoOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(285))*(#SpeedoInnerRadius#-(18*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(280))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(280))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=9

[MeterSpeedo10]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleSpeedo
; X=(#SpeedoCenterX# + 112)
; Y=(#SpeedoCenterY# + 84)
; X=(#SpeedoCenterX# + ((112 + ((#SpeedoFontSize# * #ScaleY#) * (#ScaleX# - 1))) * #ScaleX#))
; Y=(#SpeedoCenterY# + (84 * #ScaleY#))
X=(#SpeedoCenterX# - ((Sin(Rad(315))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Sin(Rad(315))*(#SpeedoInnerRadius#-(30*#ScaleY#)))))
Y=(#SpeedoCenterY# + ((Cos(Rad(308))*(#SpeedoOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(308))*(#SpeedoInnerRadius#-(10*#ScaleY#)))))
Text=10

[SpeedoVRAMRadius]
Meter=Roundline
UpdateDivider=-1
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
StartAngle=(Rad(60))
RotationAngle=(Rad(60))
LineStart=(#SpeedoOuterRadius# + 1)
LineLength=(#SpeedoOuterRadius# - 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterVRAMRadialNeedle]
Meter=ROUNDLINE
MeasureName=GPU0VRAMUsage
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
LineColor=255, 255, 255
LineWidth=(6*#ScaleY#)
AntiAlias=1
StartAngle=(Rad(120))
RotationAngle=(Rad(-60))
LineStart=(#SpeedoOuterRadius#)
LineLength=(#SpeedoOuterRadius#-20*#ScaleY#)
ValueRemainder=100

[MeterVRAMRadialFill]
Meter=Roundline
MeasureName=GPU0VRAMUsage
X=#SpeedoCenterX#
Y=#SpeedoCenterY#
LineColor=#GaugeRadialFillColor2#
StartAngle=(Rad(120))
RotationAngle=(Rad(-60))
LineStart=(#SpeedoOuterRadius#)
LineLength=(#SpeedoOuterRadius# - 20*#ScaleY#)
Solid=1
AntiAlias=1
ValueRemainder=100

[GaugeVRAMTicks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#SpeedoCenterX# + Sin(Rad(-30))*#SpeedoOuterRadius#),(#SpeedoCenterY# + Cos(Rad(-30))*#SpeedoOuterRadius#),(#SpeedoCenterX# + Sin(Rad(-30))*(#SpeedoOuterRadius#-25*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(-30))*(#SpeedoOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
Shape2=Line (#SpeedoCenterX# + Sin(Rad(0))*(#SpeedoOuterRadius#-8*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(0))*(#SpeedoOuterRadius#-8*#ScaleY#)),(#SpeedoCenterX# + Sin(Rad(0))*(#SpeedoOuterRadius#-25*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(0))*(#SpeedoOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
Shape3=Line (#SpeedoCenterX# + Sin(Rad(30))*#SpeedoOuterRadius#),(#SpeedoCenterY# + Cos(Rad(30))*#SpeedoOuterRadius#),(#SpeedoCenterX# + Sin(Rad(30))*(#SpeedoOuterRadius#-25*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(30))*(#SpeedoOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
; minor ticks
Shape4=Line (#SpeedoCenterX# + Sin(Rad(-15))*(#SpeedoOuterRadius#-15*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(-15))*(#SpeedoOuterRadius#-15*#ScaleY#)),(#SpeedoCenterX# + Sin(Rad(-15))*(#SpeedoOuterRadius#-30*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(-15))*(#SpeedoOuterRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape5=Line (#SpeedoCenterX# + Sin(Rad(15))*(#SpeedoOuterRadius#-15*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(15))*(#SpeedoOuterRadius#-15*#ScaleY#)),(#SpeedoCenterX# + Sin(Rad(15))*(#SpeedoOuterRadius#-30*#ScaleX#)),(#SpeedoCenterY# + Cos(Rad(15))*(#SpeedoOuterRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
; line styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterStringVRAM]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=#SpeedoCenterX#
Y=(#SpeedoCenterY# + #SpeedoOuterRadius# - 70 * #ScaleY#)
; Y=(#SpeedoCenterY# + #SpeedoOuterRadius# - 105)
FontSize=(18 * #ScaleY#)
; FontSize=27
FontWeight=400
Text=VRAM %

[MeterStringGPULabel]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=#SpeedoCenterX#
Y=(160 * #ScaleY#)
; Y=240
FontSize=(24 * #ScaleY#) 
; FontSize=36
FontWeight=100
Text=GPU

[MeterStringGPUUsage]
Meter=String
MeasureName=GPU0Usage
MeterStyle=GaugeFontStyle
X=#SpeedoCenterX#
Y=(200 * #ScaleY#)
; Y=300
FontSize=(68 * #ScaleY#)
; FontSize=102
FontWeight=400
Text="%1"

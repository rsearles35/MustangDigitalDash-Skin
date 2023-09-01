
; Background meters shared by all skins

[Variables]
MarginX=365
MarginY=40

[MeterBackground]
Meter=Shape
UpdateDivider=-1
Shape=Rectangle 0,0,#ResolutionX#,#ResolutionY# | Fill Color #BackgroundColor#
; Shape=Rectangle 0,0,2560,720 | Fill Color #BackgroundColor#

[MeterBackgroundImage]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\running-horse.png
X=(#MarginX# * #ScaleX#)
Y=(#MarginY# * #ScaleY#)
W = (#ResolutionX# - ((#MarginX#*2) * #ScaleX#))
H = (#ResolutionY# - ((#MarginY#*2) * #ScaleY#))
; X=365
; Y=40
; W=1189
; H=400
GreyScale=1
ImageTint=192,192,192,50

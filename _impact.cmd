loadProjectFile -file "C:\Designs\Mekal_Tomaszewski\generator_parzystosci/generator_parzystosci.ipf"
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
setMode -bs
setMode -bs
setMode -bs
Program -p 1 
setMode -bs
deleteDevice -position 2
deleteDevice -position 1

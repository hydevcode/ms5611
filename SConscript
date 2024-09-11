from building import *
Import('rtconfig')

cwd     = GetCurrentDir()
src	= []
path = [cwd]

src += ['ms5611.c']

if GetDepend('PKG_MS5611_USING_SENSOR_V1'):
    src += ['sensor_meas_ms5611.c']

group = DefineGroup('ms5611', src, depend = ['PKG_USING_MS5611'], CPPPATH = path)

Return('group')

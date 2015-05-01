#!/usr/bin/python

import glob
import re

files = glob.glob('*.h')

o_files = 'UAVOBJECTS = '
comp_blocks = ''
registers = ''
includes = ''

cc_s = re.compile(r"^class ([^:]+): public UAVObject", re.MULTILINE)

def camelCaseName(file):
    m = cc_s.search(open(file).read())
    return m.group(1) if m is not None else None

for file in files:
    camelCase = camelCaseName(file)
    if camelCase is None:
        continue

    name = file[:-2]
    comp_blocks += '''{0}.o:{0}.cpp {0}.h
    $(CC) $(CFLAGS) {0}.cpp

'''.format(name)
    o_files += '{0}.o '.format(name)

    registers += '''{0}* {1} = new {0}(manager);
manager->UAVObjRegister({1});
'''.format(camelCase, camelCase[:1].lower() + camelCase[1:])

    includes += '''#include "{0}"
'''.format(file)

#print(o_files)
#print(comp_blocks)
#print(registers)
print(includes)

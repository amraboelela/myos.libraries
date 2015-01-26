#
# Copyright © 2014 myOS Group.
#
# This is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This file is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# Lesser General Public License for more details.
#
# Contributor(s):
# Amr Aboelela <amraboelela@gmail.com>
#

echo
echo "****************************** Cleaning libraries ******************************"

cd objc
make clean
cd ..

cd icu
make clean
cd ..

cd pixman
make clean
cd ..

cd png
make clean
cd ..

cd freetype
make clean
cd ..

cd expat
make clean
cd ..

cd fontconfig
make clean
cd ..

cd cairo
make clean
cd ..

cd lcms
make clean
cd ..

##cd MAGLESv1_enc
##make clean
##cd ..

##cd MARenderControl_enc
##make clean
##cd ..

##cd MAOpenglSystemCommon
##make clean
##cd ..

##cd MAOpenglCodecCommon
##make clean
##cd ..

#cd MAEGL
#make clean
#cd ..

#cd MAKit
#make clean
#cd ..

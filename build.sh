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
echo "****************************** Building libraries ******************************"

#CAN_CLEAN=NO
TARGET=Universal

cd objc
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd icu
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd pixman
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd png
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd freetype
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd expat
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd fontconfig
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd cairo
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd lcms
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

#cd MAGLESv1_enc
#source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
#cd ..

#cd MARenderControl_enc
#source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
#cd ..

#cd MAOpenglSystemCommon
#source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
#cd ..

#cd MAOpenglCodecCommon
#source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
#cd ..

cd MAEGL
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

cd MAKit
source ${MYOS_PATH}/android/sdk/scripts/library-build.sh
cd ..

#CAN_CLEAN=YES

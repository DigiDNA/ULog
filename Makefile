#-------------------------------------------------------------------------------
# The MIT License (MIT)
# 
# Copyright (c) 2016 Jean-David Gadina - www-xs-labs.com
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
# makelib configuration
#-------------------------------------------------------------------------------

include Submodules/makelib/Common.mk

PRODUCT             := ULog
PRODUCT_LIB         := libulog
PRODUCT_DYLIB       := libulog
PRODUCT_FRAMEWORK   := ULog
PREFIX_DYLIB        := /usr/local/lib/
PREFIX_FRAMEWORK    := /Library/Frameworks/
DIR_INC             := ULog/include/
DIR_SRC             := ULog/source/
DIR_RES             := ULog/
DIR_TESTS           := Unit-Tests/
EXT_C               := .c
EXT_H               := .h
CC                  := clang
FLAGS_OPTIM         := Os
FLAGS_WARN          := -Werror -Wall
FLAGS_STD           := c99
FLAGS_OTHER         := -fno-strict-aliasing
LIBS                := -lpthread
XCODE_PROJECT       := ULog.xcodeproj
XCODE_TEST_SCHEME   := ULog

FILES_C             := $(call GET_C_FILES, $(DIR_SRC))
FILES_C_EXCLUDE     := 

FILES               := $(filter-out $(FILES_C_EXCLUDE),$(FILES_C))
FILES_TESTS         := $(call GET_C_FILES, $(DIR_TESTS))

include Submodules/makelib/Targets.mk
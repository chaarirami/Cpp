#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/8e9bab0b/gtest-all.o \
	${OBJECTDIR}/_ext/8e9bab0b/gtest_main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgoogletest1.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgoogletest1.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgoogletest1.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgoogletest1.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libgoogletest1.a

${OBJECTDIR}/_ext/8e9bab0b/gtest-all.o: ../../googletest-master/googletest/src/gtest-all.cc
	${MKDIR} -p ${OBJECTDIR}/_ext/8e9bab0b
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../googletest-master/googletest -I../../googletest-master/googletest/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8e9bab0b/gtest-all.o ../../googletest-master/googletest/src/gtest-all.cc

${OBJECTDIR}/_ext/8e9bab0b/gtest_main.o: ../../googletest-master/googletest/src/gtest_main.cc
	${MKDIR} -p ${OBJECTDIR}/_ext/8e9bab0b
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../../googletest-master/googletest -I../../googletest-master/googletest/include -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/8e9bab0b/gtest_main.o ../../googletest-master/googletest/src/gtest_main.cc

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

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
	${OBJECTDIR}/FSMbaby.o \
	${OBJECTDIR}/baby.o \
	${OBJECTDIR}/gtest/src/gtest-all.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/_ext/30177beb/gtest-all.o \
	${TESTDIR}/_ext/30177beb/gtest_main.o

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/baby.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/baby.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/baby ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/FSMbaby.o: FSMbaby.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FSMbaby.o FSMbaby.cpp

${OBJECTDIR}/baby.o: baby.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/baby.o baby.cpp

${OBJECTDIR}/gtest/src/gtest-all.o: gtest/src/gtest-all.cc
	${MKDIR} -p ${OBJECTDIR}/gtest/src
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gtest/src/gtest-all.o gtest/src/gtest-all.cc

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/_ext/30177beb/gtest-all.o ${TESTDIR}/_ext/30177beb/gtest_main.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   


${TESTDIR}/_ext/30177beb/gtest-all.o: ../../../../../../../../googletest-master/googletest/src/gtest-all.cc 
	${MKDIR} -p ${TESTDIR}/_ext/30177beb
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -I../../../googletest-master/googletest -I../../../googletest-master/googletest/include -I. -std=c++14 -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/30177beb/gtest-all.o ../../../../../../../../googletest-master/googletest/src/gtest-all.cc


${TESTDIR}/_ext/30177beb/gtest_main.o: ../../../../../../../../googletest-master/googletest/src/gtest_main.cc 
	${MKDIR} -p ${TESTDIR}/_ext/30177beb
	${RM} "$@.d"
	$(COMPILE.cc) -g -s -Igtest -Igtest/include -I../../../googletest-master/googletest -I../../../googletest-master/googletest/include -I. -std=c++14 -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/30177beb/gtest_main.o ../../../../../../../../googletest-master/googletest/src/gtest_main.cc


${OBJECTDIR}/FSMbaby_nomain.o: ${OBJECTDIR}/FSMbaby.o FSMbaby.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/FSMbaby.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FSMbaby_nomain.o FSMbaby.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/FSMbaby.o ${OBJECTDIR}/FSMbaby_nomain.o;\
	fi

${OBJECTDIR}/baby_nomain.o: ${OBJECTDIR}/baby.o baby.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/baby.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/baby_nomain.o baby.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/baby.o ${OBJECTDIR}/baby_nomain.o;\
	fi

${OBJECTDIR}/gtest/src/gtest-all_nomain.o: ${OBJECTDIR}/gtest/src/gtest-all.o gtest/src/gtest-all.cc 
	${MKDIR} -p ${OBJECTDIR}/gtest/src
	@NMOUTPUT=`${NM} ${OBJECTDIR}/gtest/src/gtest-all.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gtest/src/gtest-all_nomain.o gtest/src/gtest-all.cc;\
	else  \
	    ${CP} ${OBJECTDIR}/gtest/src/gtest-all.o ${OBJECTDIR}/gtest/src/gtest-all_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -s -Igtest -Igtest/include -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc

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
	${OBJECTDIR}/_ext/96e23cfa/gtest-all.o \
	${OBJECTDIR}/AreaMonitor.o \
	${OBJECTDIR}/CO2FSM.o \
	${OBJECTDIR}/FileHandler.o \
	${OBJECTDIR}/HumidFSM.o \
	${OBJECTDIR}/Humidifier.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/testi.o

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/probeklausur_2017.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/probeklausur_2017.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/probeklausur_2017 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/96e23cfa/gtest-all.o: ../../../../Downloads/googletest-master/googletest-master/googletest/src/gtest-all.cc
	${MKDIR} -p ${OBJECTDIR}/_ext/96e23cfa
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/96e23cfa/gtest-all.o ../../../../Downloads/googletest-master/googletest-master/googletest/src/gtest-all.cc

${OBJECTDIR}/AreaMonitor.o: AreaMonitor.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AreaMonitor.o AreaMonitor.cpp

${OBJECTDIR}/CO2FSM.o: CO2FSM.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CO2FSM.o CO2FSM.cpp

${OBJECTDIR}/FileHandler.o: FileHandler.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FileHandler.o FileHandler.cpp

${OBJECTDIR}/HumidFSM.o: HumidFSM.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HumidFSM.o HumidFSM.cpp

${OBJECTDIR}/Humidifier.o: Humidifier.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Humidifier.o Humidifier.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:
	cd ../GoogleTestLibrary && ${MAKE}  -f Makefile CONF=Debug

${TESTDIR}/TestFiles/f1: ${TESTDIR}/testi.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS}   ../GoogleTestLibrary/dist/Debug/MinGW-Windows/libgoogletestlibrary.a 


${TESTDIR}/testi.o: testi.cpp 
	${MKDIR} -p ${TESTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -I../../../../Downloads/googletest-master/googletest-master/googletest -I../../../../Downloads/googletest-master/googletest-master/googletest/include -std=c++14 -MMD -MP -MF "$@.d" -o ${TESTDIR}/testi.o testi.cpp


${OBJECTDIR}/_ext/96e23cfa/gtest-all_nomain.o: ${OBJECTDIR}/_ext/96e23cfa/gtest-all.o ../../../../Downloads/googletest-master/googletest-master/googletest/src/gtest-all.cc 
	${MKDIR} -p ${OBJECTDIR}/_ext/96e23cfa
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/96e23cfa/gtest-all.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/96e23cfa/gtest-all_nomain.o ../../../../Downloads/googletest-master/googletest-master/googletest/src/gtest-all.cc;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/96e23cfa/gtest-all.o ${OBJECTDIR}/_ext/96e23cfa/gtest-all_nomain.o;\
	fi

${OBJECTDIR}/AreaMonitor_nomain.o: ${OBJECTDIR}/AreaMonitor.o AreaMonitor.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/AreaMonitor.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/AreaMonitor_nomain.o AreaMonitor.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/AreaMonitor.o ${OBJECTDIR}/AreaMonitor_nomain.o;\
	fi

${OBJECTDIR}/CO2FSM_nomain.o: ${OBJECTDIR}/CO2FSM.o CO2FSM.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/CO2FSM.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CO2FSM_nomain.o CO2FSM.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/CO2FSM.o ${OBJECTDIR}/CO2FSM_nomain.o;\
	fi

${OBJECTDIR}/FileHandler_nomain.o: ${OBJECTDIR}/FileHandler.o FileHandler.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/FileHandler.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FileHandler_nomain.o FileHandler.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/FileHandler.o ${OBJECTDIR}/FileHandler_nomain.o;\
	fi

${OBJECTDIR}/HumidFSM_nomain.o: ${OBJECTDIR}/HumidFSM.o HumidFSM.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/HumidFSM.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/HumidFSM_nomain.o HumidFSM.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/HumidFSM.o ${OBJECTDIR}/HumidFSM_nomain.o;\
	fi

${OBJECTDIR}/Humidifier_nomain.o: ${OBJECTDIR}/Humidifier.o Humidifier.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Humidifier.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Humidifier_nomain.o Humidifier.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Humidifier.o ${OBJECTDIR}/Humidifier_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -std=c++14 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
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

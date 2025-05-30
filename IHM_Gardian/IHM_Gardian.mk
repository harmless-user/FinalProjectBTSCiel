##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=IHM_Gardian
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/ir2/vfacompre/Documents/Projet_Ciel_A/IHM_Gardian
ProjectPath            :=/home/ir2/vfacompre/Documents/Projet_Ciel_A/IHM_Gardian/IHM_Gardian
IntermediateDirectory  :=../build-$(ConfigurationName)/IHM_Gardian
OutDir                 :=../build-$(ConfigurationName)/IHM_Gardian
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Valentin FACOMPRE
Date                   :=05/27/25
CodeLitePath           :=/home/ir2/vfacompre/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            := -no-pie $(shell wx-config   --libs --unicode=yes)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)IHM 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(shell wx-config --cxxflags --unicode=yes  ) $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/IHM_Gardian/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/IHM_Gardian"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/IHM_Gardian"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/IHM_Gardian/.d:
	@mkdir -p "../build-$(ConfigurationName)/IHM_Gardian"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(ObjectSuffix): FramePrincipal.cpp ../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/vfacompre/Documents/Projet_Ciel_A/IHM_Gardian/IHM_Gardian/FramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(DependSuffix): FramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(DependSuffix) -MM FramePrincipal.cpp

../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(PreprocessSuffix): FramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/IHM_Gardian/FramePrincipal.cpp$(PreprocessSuffix) FramePrincipal.cpp

../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(ObjectSuffix): EvtFramePrincipal.cpp ../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/vfacompre/Documents/Projet_Ciel_A/IHM_Gardian/IHM_Gardian/EvtFramePrincipal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EvtFramePrincipal.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(DependSuffix): EvtFramePrincipal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(DependSuffix) -MM EvtFramePrincipal.cpp

../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(PreprocessSuffix): EvtFramePrincipal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/IHM_Gardian/EvtFramePrincipal.cpp$(PreprocessSuffix) EvtFramePrincipal.cpp

../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(ObjectSuffix): MyApp.cpp ../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/ir2/vfacompre/Documents/Projet_Ciel_A/IHM_Gardian/IHM_Gardian/MyApp.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyApp.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(DependSuffix): MyApp.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(DependSuffix) -MM MyApp.cpp

../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(PreprocessSuffix): MyApp.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/IHM_Gardian/MyApp.cpp$(PreprocessSuffix) MyApp.cpp


-include ../build-$(ConfigurationName)/IHM_Gardian//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)



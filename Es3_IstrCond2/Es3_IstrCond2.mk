##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Es3_IstrCond2
ConfigurationName      :=Debug
WorkspacePath          :=/Users/simonebaglieri/Documents/Prova
ProjectPath            :=/Users/simonebaglieri/Documents/Prova/Es3_IstrCond2
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Simone Baglieri
Date                   :=04/05/2019
CodeLitePath           :="/Users/simonebaglieri/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -dynamiclib -fPIC
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Es3_IstrCond2.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
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
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/private/var/folders/ld/jl497n150n9d6_sdwbdpyll40000gq/T/AppTranslocation/680EF6AF-7C9B-4839-A693-E66FEEF32DDB/d/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Array4uguali.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Array4uguali.c$(ObjectSuffix): Array4uguali.c $(IntermediateDirectory)/Array4uguali.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Users/simonebaglieri/Documents/Prova/Es3_IstrCond2/Array4uguali.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Array4uguali.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Array4uguali.c$(DependSuffix): Array4uguali.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Array4uguali.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Array4uguali.c$(DependSuffix) -MM Array4uguali.c

$(IntermediateDirectory)/Array4uguali.c$(PreprocessSuffix): Array4uguali.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Array4uguali.c$(PreprocessSuffix) Array4uguali.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



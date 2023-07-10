OPAL-1.0 Object
DataLogger::Configuration {
  m01_recordMode=Automatic
  m05_useRTCore=0
  m06_verbose=0
  m09_noDataLoss=0
  m13_usageMode=Basic
  m14_logLevel=Minimal
  m15_toolPriority=NORMAL
  m17_showDLTConsole=0
  name=CEE90F7B-1E9B-455C-8E9B-E76EBEFD10B4_ConfigAE831797-984F-4527-BD3D-C69DFB71E5FC
  m10_signalGroupConfigList=CEE90F7B-1E9B-455C-8E9B-E76EBEFD10B4_ConfigAE831797-984F-4527-BD3D-C69DFB71E5FC/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=CEE90F7B-1E9B-455C-8E9B-E76EBEFD10B4_ConfigAE831797-984F-4527-BD3D-C69DFB71E5FC/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=4CA6164E-7A4C-485C-AD2C-1AB08D6027ED-default/SyncExchangerRegistry/74362DE2-BB17-46C6-991A-CD33B037B1D3/CEE90F7B-1E9B-455C-8E9B-E76EBEFD10B4_ConfigAE831797-984F-4527-BD3D-C69DFB71E5FC/SignalGroupConfigList
      instance {
        guid=E67A125F-E60C-4D64-9056-DE32817B4265
        m003_recordMode=Inherit
        m006_exportFormat=OPREC
        m007_fileAutoNaming=1
        m010_fileName=data
        m011_decimationFactor=1
        m015_frameLength=1
        m016_frameLengthUnits=Seconds
        m020_nbRecordedFrames=10
        m021_fileLength=10
        m022_fileLengthUnits=Seconds
        m11_showTriggerConfiguration=1
        m12_triggerReferenceValue=0
        m13_triggerMode=Normal
        m14_triggerFunction=Edge
        m15_triggerPolarity=Positive
        m18_preTriggerPercent=0
        m19_triggerHoldoff=0
        m20_triggerSignalPath=
        m35_enableSubFraming=1
        m36_subFrameSizeMillis=10
      }
    }
  }
  parent=CEE90F7B-1E9B-455C-8E9B-E76EBEFD10B4_ConfigAE831797-984F-4527-BD3D-C69DFB71E5FC
}
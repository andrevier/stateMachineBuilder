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
  name=23EF2ED2-F0A8-43B1-AC66-B794B6D30DCD_Config5E846594-5981-4693-A747-2F11F9B22595
  m10_signalGroupConfigList=23EF2ED2-F0A8-43B1-AC66-B794B6D30DCD_Config5E846594-5981-4693-A747-2F11F9B22595/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=23EF2ED2-F0A8-43B1-AC66-B794B6D30DCD_Config5E846594-5981-4693-A747-2F11F9B22595/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=4CA6164E-7A4C-485C-AD2C-1AB08D6027ED-default/SyncExchangerRegistry/F9D1F204-C98B-4D45-B971-C67011C15EBC/23EF2ED2-F0A8-43B1-AC66-B794B6D30DCD_Config5E846594-5981-4693-A747-2F11F9B22595/SignalGroupConfigList
      instance {
        guid=A533EA4D-89DA-42B4-8F73-B53DB51D0FBB
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
  parent=23EF2ED2-F0A8-43B1-AC66-B794B6D30DCD_Config5E846594-5981-4693-A747-2F11F9B22595
}
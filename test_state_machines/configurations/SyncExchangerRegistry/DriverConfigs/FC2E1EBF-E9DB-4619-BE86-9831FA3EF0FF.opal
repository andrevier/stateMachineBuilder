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
  name=FC2E1EBF-E9DB-4619-BE86-9831FA3EF0FF_ConfigBC5A1238-9F1F-417F-B915-B72DCD9A1E76
  m10_signalGroupConfigList=FC2E1EBF-E9DB-4619-BE86-9831FA3EF0FF_ConfigBC5A1238-9F1F-417F-B915-B72DCD9A1E76/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=FC2E1EBF-E9DB-4619-BE86-9831FA3EF0FF_ConfigBC5A1238-9F1F-417F-B915-B72DCD9A1E76/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=4CA6164E-7A4C-485C-AD2C-1AB08D6027ED-default/SyncExchangerRegistry/F3F5BE39-0874-4204-A8A9-4D22C4D4C879/FC2E1EBF-E9DB-4619-BE86-9831FA3EF0FF_ConfigBC5A1238-9F1F-417F-B915-B72DCD9A1E76/SignalGroupConfigList
      instance {
        guid=C030E941-7DFE-4CDA-B2B0-7A52A1B4CD56
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
  parent=FC2E1EBF-E9DB-4619-BE86-9831FA3EF0FF_ConfigBC5A1238-9F1F-417F-B915-B72DCD9A1E76
}
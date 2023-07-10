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
  name=4A4A33D5-3479-412C-83BF-44123C6FFEA8_Config9357AA33-888E-40C5-9F96-39AEE27945D4
  m10_signalGroupConfigList=4A4A33D5-3479-412C-83BF-44123C6FFEA8_Config9357AA33-888E-40C5-9F96-39AEE27945D4/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=4A4A33D5-3479-412C-83BF-44123C6FFEA8_Config9357AA33-888E-40C5-9F96-39AEE27945D4/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=4CA6164E-7A4C-485C-AD2C-1AB08D6027ED-default/SyncExchangerRegistry/C5DEBE9E-959D-4655-9443-35A1C655125E/4A4A33D5-3479-412C-83BF-44123C6FFEA8_Config9357AA33-888E-40C5-9F96-39AEE27945D4/SignalGroupConfigList
      instance {
        guid=6BD28481-1ED5-44AD-86CA-6AA64F4F999D
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
  parent=4A4A33D5-3479-412C-83BF-44123C6FFEA8_Config9357AA33-888E-40C5-9F96-39AEE27945D4
}
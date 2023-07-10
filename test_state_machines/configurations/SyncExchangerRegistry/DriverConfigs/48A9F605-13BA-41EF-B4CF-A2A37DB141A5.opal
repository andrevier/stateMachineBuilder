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
  name=48A9F605-13BA-41EF-B4CF-A2A37DB141A5_Config2CDC4914-A406-4EC9-87FB-5949770755A6
  m10_signalGroupConfigList=48A9F605-13BA-41EF-B4CF-A2A37DB141A5_Config2CDC4914-A406-4EC9-87FB-5949770755A6/SignalGroupConfigList
  parent=/
}
IOConfigListMap<DataLogger::SignalGroupConfig> {
  resizable=1
  uiName=SIGNAL_GROUP_
  name=48A9F605-13BA-41EF-B4CF-A2A37DB141A5_Config2CDC4914-A406-4EC9-87FB-5949770755A6/SignalGroupConfigList
  items {
    item {
      IOConfigItem_id=SIGNAL_GROUP_1
      isDeletable=1
      listParent=4CA6164E-7A4C-485C-AD2C-1AB08D6027ED-default/SyncExchangerRegistry/BFC089C5-6895-4234-9E7F-95922980FC69/48A9F605-13BA-41EF-B4CF-A2A37DB141A5_Config2CDC4914-A406-4EC9-87FB-5949770755A6/SignalGroupConfigList
      instance {
        guid=C50E7DFA-AF48-4DBC-97B9-8C22A089377E
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
  parent=48A9F605-13BA-41EF-B4CF-A2A37DB141A5_Config2CDC4914-A406-4EC9-87FB-5949770755A6
}
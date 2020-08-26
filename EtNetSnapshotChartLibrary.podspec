Pod::Spec.new do |s|
  s.name = "EtNetSnapshotChartLibrary"
  s.version = "1.0.3"
  s.summary = "A SnapshotchartLibrary produced by EtNet"
  s.license = "MIT"
  s.authors = {"klauswongEtnet"=>"klauswong@etnet.com.hk"}
  s.homepage = "http://EXAMPLE/EtNetSnapshotChartLibrary"
  s.description = "Through this SnapshotChartLibrary API, you would get back the snapshotChartUIView"
  s.source = { :path => '.' }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/EtNetSnapshotChartLibrary.framework'
end

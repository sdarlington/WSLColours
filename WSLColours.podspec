Pod::Spec.new do |s|

s.name         = "WSLColours"
s.version      = "1.0.0"
s.summary      = "Colours used in Wandle Software apps."

s.description  = <<-DESC
Convenience methods to get Wandle Software standard colours.
DESC

s.homepage     = "https://github.com/sdarlington/WSLColours"
s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }
s.author             = "Stephen Darlington"
s.social_media_url = "http://twitter.com/sdarlington"
s.platform     = :ios, '5.1'
s.source       = { :git => "https://github.com/sdarlington/WSLColours.git", :tag => '1.0.0' }
s.source_files  = 'UIColor+WSLColours.{h,m}'
s.public_header_files = 'UIColor+WSLColours.h'

end

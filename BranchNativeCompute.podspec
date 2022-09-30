Pod::Spec.new do |spec|
  spec.name               = "BranchNativeCompute"
  spec.version            = "0.0.9"
  spec.summary            = "Create an HTTP URL for any piece of content in your app"
  spec.description        = <<-DESC
- Want the highest possible conversions on your sharing feature?
- Want to measure the k-factor of your invite feature?
- Want a whole referral program in 10 lines of code, with automatic user-user attribution and rewarding?
- Want to pass data (deep link) from a URL across install and open?
- Want custom onboarding post install?

Use the Branch SDK (branch.io) to create and power the links that point back to your apps for all of these things and more. Branch makes it incredibly simple to create powerful deep links that can pass data across app install and open while handling all edge cases (using on desktop vs. mobile vs. already having the app installed, etc). Best of all, it's really simple to start using the links for your own app: only 2 lines of code to register the deep link router and one more line of code to create the links with custom data.
                       DESC
  spec.homepage           = "https://help.branch.io/developers-hub/docs/ios-sdk-overview"
  spec.license            = "BRANCH METRICS, INC. SOFTWARE LICENSE TERMS"
  spec.author             = { "BranchNativeCompute" => "native-compute@branch.io" }
  spec.platform           = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.source            = { :http => 'https://github.com/BranchMetrics/nativesdk-podspec/releases/download/v0.0.9/NativeComputeSDK.xcframework.zip',
			     :sha256 => '4ef4e5fb2fc7634181d37af120df5dd8d4eb1310146489987fa4acd298968346' }
  spec.ios.vendored_frameworks = 'NativeComputeSDK.xcframework'
end

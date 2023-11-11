# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.sfml-audio.Debug:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-audio-s-d.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-audio-s-d.a


PostBuild.sfml-graphics.Debug:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-graphics-s-d.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-graphics-s-d.a


PostBuild.sfml-network.Debug:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-network-s-d.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-network-s-d.a


PostBuild.sfml-system.Debug:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-system-s-d.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-system-s-d.a


PostBuild.sfml-window.Debug:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-window-s-d.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Debug/libsfml-window-s-d.a


PostBuild.sfml-audio.Release:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-audio-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-audio-s.a


PostBuild.sfml-graphics.Release:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-graphics-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-graphics-s.a


PostBuild.sfml-network.Release:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-network-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-network-s.a


PostBuild.sfml-system.Release:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-system-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-system-s.a


PostBuild.sfml-window.Release:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-window-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/Release/libsfml-window-s.a


PostBuild.sfml-audio.MinSizeRel:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-audio-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-audio-s.a


PostBuild.sfml-graphics.MinSizeRel:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-graphics-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-graphics-s.a


PostBuild.sfml-network.MinSizeRel:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-network-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-network-s.a


PostBuild.sfml-system.MinSizeRel:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-system-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-system-s.a


PostBuild.sfml-window.MinSizeRel:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-window-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/MinSizeRel/libsfml-window-s.a


PostBuild.sfml-audio.RelWithDebInfo:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-audio-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-audio-s.a


PostBuild.sfml-graphics.RelWithDebInfo:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-graphics-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-graphics-s.a


PostBuild.sfml-network.RelWithDebInfo:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-network-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-network-s.a


PostBuild.sfml-system.RelWithDebInfo:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-system-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-system-s.a


PostBuild.sfml-window.RelWithDebInfo:
/Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-window-s.a:
	/bin/rm -f /Users/rrask/Desktop/DinoJump/_deps/sfml-build/lib/RelWithDebInfo/libsfml-window-s.a




# For each target create a dummy ruleso the target does not have to exist

# Class dump most important macOS applications and frameworks

function plistbuddy () {
	/usr/libexec/PlistBuddy -c "$@"
}

function dump_item() {
	if [ ! -e "$2" ]; then
		echo "$_pref" : "$_vers"
	  	mkdir -p "$2"
	  	"$HOME/bin/dump.sh" "$1" "$2"
	  	echo
	fi
}

function class_dump() {

	_osx=$(sw_vers -productVersion)
	_mjr=${_osx%.*}

	for entry in "$1"/*
	do
		_file="$entry"
		_path=${_file%/*}
		_fldr=${_path##*/}
		_base=${_file##*/}
		_fext=${_base##*.}
		_pref=${_base%.*}

		if [[ "$_fext" == "app" ]] || [[ "$_fext" == "framework" ]]; then

			_info="$_file"/Contents/Info.plist
			if [[ "$_fext" == "framework" ]]; then _info="$_file"/Resources/Info.plist; fi

			# _shrt=$(plistbuddy "Print CFBundleShortVersionString" "$_info")
			_vers=$(plistbuddy "Print CFBundleVersion" "$_info")

			_resl="$?"
			if [[ "$_resl" != 0 ]]; then 
				echo "$_resl : $_vers"
				echo "$_file"
				echo
			fi

			dump_path="$HOME"/GitHub/wb_headers/"$_mjr"/"$_fldr"/"$_pref"/"$_vers"
			dump_item "$_file" "$dump_path"

			# echo "path: $_file"
			# echo "base: $_fldr"
			# echo "name: $_pref"
			# echo "exte: $_fext"
			# echo ""

		fi

	done

}

# mkdir "$USER"/Desktop/osx_headers

class_dump "/Applications"
class_dump "/Applications/Utilities"
class_dump "/System/Library/Frameworks"
class_dump "/System/Library/PrivateFrameworks"
class_dump "/System/Library/CoreServices"
class_dump "/System/Library/CoreServices/Applications"

echo
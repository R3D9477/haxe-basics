// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b4db2871ee22ed2c_31_exists,"sys.FileSystem","exists",0xf55bed9e,"sys.FileSystem.exists","/usr/share/haxe/std/cpp/_std/sys/FileSystem.hx",31,0xcabeeced)
namespace sys{

void FileSystem_obj::__construct() { }

Dynamic FileSystem_obj::__CreateEmpty() { return new FileSystem_obj; }

void *FileSystem_obj::_hx_vtable = 0;

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileSystem_obj > _hx_result = new FileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x284891f8;
}

bool FileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_b4db2871ee22ed2c_31_exists)
HXDLIN(  31)		::String _hx_tmp;
HXDLIN(  31)		bool _hx_tmp1;
HXDLIN(  31)		if (hx::IsEq( path.charCodeAt((int)1),(int)58 )) {
HXDLIN(  31)			_hx_tmp1 = (path.length <= (int)3);
            		}
            		else {
HXDLIN(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXDLIN(  31)			_hx_tmp = ::haxe::io::Path_obj::addTrailingSlash(path);
            		}
            		else {
HXDLIN(  31)			_hx_tmp = ::haxe::io::Path_obj::removeTrailingSlashes(path);
            		}
HXDLIN(  31)		return _hx_std_sys_exists(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,exists,return )


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FileSystem_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FileSystem_obj_sStaticStorageInfo = 0;
#endif

static void FileSystem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileSystem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
};

#endif

hx::Class FileSystem_obj::__mClass;

static ::String FileSystem_obj_sStaticFields[] = {
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	::String(null())
};

void FileSystem_obj::__register()
{
	hx::Object *dummy = new FileSystem_obj;
	FileSystem_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.FileSystem","\x6c","\x2c","\xe5","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileSystem_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FileSystem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileSystem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileSystem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys

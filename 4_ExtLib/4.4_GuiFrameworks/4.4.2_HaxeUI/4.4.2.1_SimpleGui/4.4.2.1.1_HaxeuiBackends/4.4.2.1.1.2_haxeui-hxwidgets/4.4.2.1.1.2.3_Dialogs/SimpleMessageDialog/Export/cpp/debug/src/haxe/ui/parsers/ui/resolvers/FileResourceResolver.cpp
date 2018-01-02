// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_FileResourceResolver
#include <haxe/ui/parsers/ui/resolvers/FileResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5a3570f256550b49_14_new,"haxe.ui.parsers.ui.resolvers.FileResourceResolver","new",0x819791d1,"haxe.ui.parsers.ui.resolvers.FileResourceResolver.new","haxe/ui/parsers/ui/resolvers/FileResourceResolver.hx",14,0xb4196ede)
HX_LOCAL_STACK_FRAME(_hx_pos_5a3570f256550b49_26_getResourceData,"haxe.ui.parsers.ui.resolvers.FileResourceResolver","getResourceData",0x6f095abf,"haxe.ui.parsers.ui.resolvers.FileResourceResolver.getResourceData","haxe/ui/parsers/ui/resolvers/FileResourceResolver.hx",26,0xb4196ede)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{
namespace resolvers{

void FileResourceResolver_obj::__construct(::String rootFile, ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_5a3570f256550b49_14_new)
HXLINE(  15)		super::__construct(params);
HXLINE(  16)		this->_rootFile = rootFile;
HXLINE(  17)		::Array< ::String > arr = this->_rootFile.split(HX_("/",2f,00,00,00));
HXLINE(  18)		arr->pop();
HXLINE(  19)		this->_rootDir = arr->join(HX_("/",2f,00,00,00));
HXLINE(  20)		if ((arr->length > (int)1)) {
HXLINE(  21)			 ::haxe::ui::parsers::ui::resolvers::FileResourceResolver _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  21)			_hx_tmp->_rootDir = (_hx_tmp->_rootDir + HX_("/",2f,00,00,00));
            		}
            	}

Dynamic FileResourceResolver_obj::__CreateEmpty() { return new FileResourceResolver_obj; }

void *FileResourceResolver_obj::_hx_vtable = 0;

Dynamic FileResourceResolver_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileResourceResolver_obj > _hx_result = new FileResourceResolver_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FileResourceResolver_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2d679233) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2d679233;
	} else {
		return inClassId==(int)0x602d5b7b;
	}
}

::String FileResourceResolver_obj::getResourceData(::String r){
            	HX_STACKFRAME(&_hx_pos_5a3570f256550b49_26_getResourceData)
HXLINE(  27)		::String f = (this->_rootDir + r);
HXLINE(  28)		::String data = null();
HXLINE(  29)		if (::sys::FileSystem_obj::exists(f)) {
HXLINE(  30)			::String data1 = ::sys::io::File_obj::getContent(f);
HXDLIN(  30)			data = ::haxe::ui::util::StringUtil_obj::replaceVars(data1,this->_params);
            		}
HXLINE(  32)		if (hx::IsNull( data )) {
HXLINE(  33)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  33)			_hx_tmp((HX_("WARNING: Could not find file: ",3b,30,e9,cc) + f),hx::SourceInfo(HX_("FileResourceResolver.hx",0e,8f,42,0f),33,HX_("haxe.ui.parsers.ui.resolvers.FileResourceResolver",5f,55,7c,b2),HX_("getResourceData",ce,b3,b0,ac)));
            		}
HXLINE(  35)		return data;
            	}



hx::ObjectPtr< FileResourceResolver_obj > FileResourceResolver_obj::__new(::String rootFile, ::haxe::ds::StringMap params) {
	hx::ObjectPtr< FileResourceResolver_obj > __this = new FileResourceResolver_obj();
	__this->__construct(rootFile,params);
	return __this;
}

hx::ObjectPtr< FileResourceResolver_obj > FileResourceResolver_obj::__alloc(hx::Ctx *_hx_ctx,::String rootFile, ::haxe::ds::StringMap params) {
	FileResourceResolver_obj *__this = (FileResourceResolver_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileResourceResolver_obj), true, "haxe.ui.parsers.ui.resolvers.FileResourceResolver"));
	*(void **)__this = FileResourceResolver_obj::_hx_vtable;
	__this->__construct(rootFile,params);
	return __this;
}

FileResourceResolver_obj::FileResourceResolver_obj()
{
}

void FileResourceResolver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileResourceResolver);
	HX_MARK_MEMBER_NAME(_rootFile,"_rootFile");
	HX_MARK_MEMBER_NAME(_rootDir,"_rootDir");
	 ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileResourceResolver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rootFile,"_rootFile");
	HX_VISIT_MEMBER_NAME(_rootDir,"_rootDir");
	 ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FileResourceResolver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_rootDir") ) { return hx::Val( _rootDir ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rootFile") ) { return hx::Val( _rootFile ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceData") ) { return hx::Val( getResourceData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FileResourceResolver_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_rootDir") ) { _rootDir=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_rootFile") ) { _rootFile=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileResourceResolver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22"));
	outFields->push(HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileResourceResolver_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FileResourceResolver_obj,_rootFile),HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22")},
	{hx::fsString,(int)offsetof(FileResourceResolver_obj,_rootDir),HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileResourceResolver_obj_sStaticStorageInfo = 0;
#endif

static ::String FileResourceResolver_obj_sMemberFields[] = {
	HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22"),
	HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56"),
	HX_HCSTRING("getResourceData","\xce","\xb3","\xb0","\xac"),
	::String(null()) };

static void FileResourceResolver_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileResourceResolver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileResourceResolver_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileResourceResolver_obj::__mClass,"__mClass");
};

#endif

hx::Class FileResourceResolver_obj::__mClass;

void FileResourceResolver_obj::__register()
{
	hx::Object *dummy = new FileResourceResolver_obj;
	FileResourceResolver_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.resolvers.FileResourceResolver","\x5f","\x55","\x7c","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileResourceResolver_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileResourceResolver_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileResourceResolver_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileResourceResolver_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileResourceResolver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileResourceResolver_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
} // end namespace resolvers

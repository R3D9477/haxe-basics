// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_AssetResourceResolver
#include <haxe/ui/parsers/ui/resolvers/AssetResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_69e0556202e040b5_8_new,"haxe.ui.parsers.ui.resolvers.AssetResourceResolver","new",0x783b1dc7,"haxe.ui.parsers.ui.resolvers.AssetResourceResolver.new","haxe/ui/parsers/ui/resolvers/AssetResourceResolver.hx",8,0x3a16768a)
HX_LOCAL_STACK_FRAME(_hx_pos_69e0556202e040b5_19_getResourceData,"haxe.ui.parsers.ui.resolvers.AssetResourceResolver","getResourceData",0xd949ffb5,"haxe.ui.parsers.ui.resolvers.AssetResourceResolver.getResourceData","haxe/ui/parsers/ui/resolvers/AssetResourceResolver.hx",19,0x3a16768a)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{
namespace resolvers{

void AssetResourceResolver_obj::__construct(::String rootFile, ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_69e0556202e040b5_8_new)
HXLINE(   9)		super::__construct(params);
HXLINE(  10)		this->_rootFile = rootFile;
HXLINE(  11)		::Array< ::String > arr = this->_rootFile.split(HX_("/",2f,00,00,00));
HXLINE(  12)		arr->pop();
HXLINE(  13)		this->_rootDir = arr->join(HX_("/",2f,00,00,00));
HXLINE(  14)		if ((arr->length > (int)1)) {
HXLINE(  15)			 ::haxe::ui::parsers::ui::resolvers::AssetResourceResolver _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  15)			_hx_tmp->_rootDir = (_hx_tmp->_rootDir + HX_("/",2f,00,00,00));
            		}
            	}

Dynamic AssetResourceResolver_obj::__CreateEmpty() { return new AssetResourceResolver_obj; }

void *AssetResourceResolver_obj::_hx_vtable = 0;

Dynamic AssetResourceResolver_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetResourceResolver_obj > _hx_result = new AssetResourceResolver_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AssetResourceResolver_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x602d5b7b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x602d5b7b;
	} else {
		return inClassId==(int)0x7f5e978d;
	}
}

::String AssetResourceResolver_obj::getResourceData(::String r){
            	HX_STACKFRAME(&_hx_pos_69e0556202e040b5_19_getResourceData)
HXLINE(  20)		::String f = ::haxe::io::Path_obj::normalize((this->_rootDir + r));
HXLINE(  21)		return ::haxe::ui::ToolkitAssets_obj::get_instance()->getText(f);
            	}



hx::ObjectPtr< AssetResourceResolver_obj > AssetResourceResolver_obj::__new(::String rootFile, ::haxe::ds::StringMap params) {
	hx::ObjectPtr< AssetResourceResolver_obj > __this = new AssetResourceResolver_obj();
	__this->__construct(rootFile,params);
	return __this;
}

hx::ObjectPtr< AssetResourceResolver_obj > AssetResourceResolver_obj::__alloc(hx::Ctx *_hx_ctx,::String rootFile, ::haxe::ds::StringMap params) {
	AssetResourceResolver_obj *__this = (AssetResourceResolver_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetResourceResolver_obj), true, "haxe.ui.parsers.ui.resolvers.AssetResourceResolver"));
	*(void **)__this = AssetResourceResolver_obj::_hx_vtable;
	__this->__construct(rootFile,params);
	return __this;
}

AssetResourceResolver_obj::AssetResourceResolver_obj()
{
}

void AssetResourceResolver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetResourceResolver);
	HX_MARK_MEMBER_NAME(_rootFile,"_rootFile");
	HX_MARK_MEMBER_NAME(_rootDir,"_rootDir");
	 ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AssetResourceResolver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_rootFile,"_rootFile");
	HX_VISIT_MEMBER_NAME(_rootDir,"_rootDir");
	 ::haxe::ui::parsers::ui::resolvers::ResourceResolver_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AssetResourceResolver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val AssetResourceResolver_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
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

void AssetResourceResolver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22"));
	outFields->push(HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetResourceResolver_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetResourceResolver_obj,_rootFile),HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22")},
	{hx::fsString,(int)offsetof(AssetResourceResolver_obj,_rootDir),HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetResourceResolver_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetResourceResolver_obj_sMemberFields[] = {
	HX_HCSTRING("_rootFile","\x1d","\x99","\x88","\x22"),
	HX_HCSTRING("_rootDir","\xcc","\x61","\x3f","\x56"),
	HX_HCSTRING("getResourceData","\xce","\xb3","\xb0","\xac"),
	::String(null()) };

static void AssetResourceResolver_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetResourceResolver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetResourceResolver_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetResourceResolver_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetResourceResolver_obj::__mClass;

void AssetResourceResolver_obj::__register()
{
	hx::Object *dummy = new AssetResourceResolver_obj;
	AssetResourceResolver_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.resolvers.AssetResourceResolver","\x55","\x2e","\x41","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetResourceResolver_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetResourceResolver_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetResourceResolver_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetResourceResolver_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetResourceResolver_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetResourceResolver_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui
} // end namespace resolvers

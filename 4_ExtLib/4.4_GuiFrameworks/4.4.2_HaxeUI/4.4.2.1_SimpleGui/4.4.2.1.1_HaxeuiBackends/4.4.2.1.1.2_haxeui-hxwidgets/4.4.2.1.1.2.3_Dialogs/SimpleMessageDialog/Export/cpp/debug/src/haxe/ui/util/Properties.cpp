// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3268d5d7055de888_10_new,"haxe.ui.util.Properties","new",0xbfb6959f,"haxe.ui.util.Properties.new","haxe/ui/util/Properties.hx",10,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_14_fromFile,"haxe.ui.util.Properties","fromFile",0x5d767367,"haxe.ui.util.Properties.fromFile","haxe/ui/util/Properties.hx",14,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_28_getProp,"haxe.ui.util.Properties","getProp",0x6bc94818,"haxe.ui.util.Properties.getProp","haxe/ui/util/Properties.hx",28,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_36_getPropInt,"haxe.ui.util.Properties","getPropInt",0xff489bb7,"haxe.ui.util.Properties.getPropInt","haxe/ui/util/Properties.hx",36,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_45_getPropBool,"haxe.ui.util.Properties","getPropBool",0x5b9fe462,"haxe.ui.util.Properties.getPropBool","haxe/ui/util/Properties.hx",45,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_54_getPropCol,"haxe.ui.util.Properties","getPropCol",0xff440f08,"haxe.ui.util.Properties.getPropCol","haxe/ui/util/Properties.hx",54,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_64_setProp,"haxe.ui.util.Properties","setProp",0x5ecad924,"haxe.ui.util.Properties.setProp","haxe/ui/util/Properties.hx",64,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_68_names,"haxe.ui.util.Properties","names",0x081262c7,"haxe.ui.util.Properties.names","haxe/ui/util/Properties.hx",68,0xe390f4b0)
HX_LOCAL_STACK_FRAME(_hx_pos_3268d5d7055de888_72_addAll,"haxe.ui.util.Properties","addAll",0x8985d5a1,"haxe.ui.util.Properties.addAll","haxe/ui/util/Properties.hx",72,0xe390f4b0)
namespace haxe{
namespace ui{
namespace util{

void Properties_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_3268d5d7055de888_10_new)
HXDLIN(  10)		this->_props =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic Properties_obj::__CreateEmpty() { return new Properties_obj; }

void *Properties_obj::_hx_vtable = 0;

Dynamic Properties_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Properties_obj > _hx_result = new Properties_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Properties_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52ffc74f;
}

void Properties_obj::fromFile(::String filePath){
            	HX_GC_STACKFRAME(&_hx_pos_3268d5d7055de888_14_fromFile)
HXLINE(  15)		this->_props =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  16)		::String content = ::sys::io::File_obj::getContent(filePath);
HXLINE(  17)		::Array< ::String > lines = content.split(HX_("\n",0a,00,00,00));
HXLINE(  18)		{
HXLINE(  18)			int _g = (int)0;
HXDLIN(  18)			while((_g < lines->length)){
HXLINE(  18)				::String line = lines->__get(_g);
HXDLIN(  18)				_g = (_g + (int)1);
HXLINE(  19)				line = ::StringTools_obj::trim(line);
HXLINE(  20)				if ((line.length != (int)0)) {
HXLINE(  21)					::Array< ::String > parts = line.split(HX_("=",3d,00,00,00));
HXLINE(  22)					this->_props->set(parts->__get((int)0),parts->__get((int)1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,fromFile,(void))

::String Properties_obj::getProp(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_28_getProp)
HXLINE(  29)		::String v = defaultValue;
HXLINE(  30)		if (this->_props->exists(name)) {
HXLINE(  31)			v = ( (::String)(this->_props->get(name)) );
            		}
HXLINE(  33)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getProp,return )

int Properties_obj::getPropInt(::String name,hx::Null< int >  __o_defaultValue){
int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_36_getPropInt)
HXLINE(  37)		int v = defaultValue;
HXLINE(  38)		::String stringValue = this->getProp(name,null());
HXLINE(  39)		if (hx::IsNotNull( stringValue )) {
HXLINE(  40)			v = ::Std_obj::parseInt(stringValue);
            		}
HXLINE(  42)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropInt,return )

bool Properties_obj::getPropBool(::String name,hx::Null< bool >  __o_defaultValue){
bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_45_getPropBool)
HXLINE(  46)		bool v = defaultValue;
HXLINE(  47)		::String stringValue = this->getProp(name,null());
HXLINE(  48)		if (hx::IsNotNull( stringValue )) {
HXLINE(  49)			v = (stringValue == HX_("true",4e,a7,03,4d));
            		}
HXLINE(  51)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropBool,return )

int Properties_obj::getPropCol(::String name,hx::Null< int >  __o_defaultValue){
int defaultValue = __o_defaultValue.Default(0);
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_54_getPropCol)
HXLINE(  55)		int v = defaultValue;
HXLINE(  56)		::String stringValue = this->getProp(name,null());
HXLINE(  57)		if (hx::IsNotNull( stringValue )) {
HXLINE(  58)			::String s = stringValue;
HXDLIN(  58)			if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE(  58)				s = s.substring((int)1,s.length);
            			}
            			else {
HXLINE(  58)				if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE(  58)					s = s.substring((int)2,s.length);
            				}
            			}
HXDLIN(  58)			v = ::Std_obj::parseInt((HX_("0xFF",88,89,15,20) + s));
            		}
HXLINE(  60)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,getPropCol,return )

void Properties_obj::setProp(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_64_setProp)
HXDLIN(  64)		this->_props->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Properties_obj,setProp,(void))

 ::Dynamic Properties_obj::names(){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_68_names)
HXDLIN(  68)		return this->_props->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Properties_obj,names,return )

void Properties_obj::addAll( ::haxe::ui::util::Properties p){
            	HX_STACKFRAME(&_hx_pos_3268d5d7055de888_72_addAll)
HXDLIN(  72)		 ::Dynamic name = p->names();
HXDLIN(  72)		while(( (bool)(name->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN(  72)			::String name1 = ( (::String)(name->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  73)			::Dynamic this1 = this->_props;
HXDLIN(  73)			( ( ::haxe::ds::StringMap)(this1) )->set(name1,p->getProp(name1,null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Properties_obj,addAll,(void))


hx::ObjectPtr< Properties_obj > Properties_obj::__new() {
	hx::ObjectPtr< Properties_obj > __this = new Properties_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Properties_obj > Properties_obj::__alloc(hx::Ctx *_hx_ctx) {
	Properties_obj *__this = (Properties_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Properties_obj), true, "haxe.ui.util.Properties"));
	*(void **)__this = Properties_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Properties_obj::Properties_obj()
{
}

void Properties_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Properties);
	HX_MARK_MEMBER_NAME(_props,"_props");
	HX_MARK_END_CLASS();
}

void Properties_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_props,"_props");
}

hx::Val Properties_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { return hx::Val( _props ); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return hx::Val( addAll_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getProp") ) { return hx::Val( getProp_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProp") ) { return hx::Val( setProp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return hx::Val( fromFile_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getPropInt") ) { return hx::Val( getPropInt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPropCol") ) { return hx::Val( getPropCol_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPropBool") ) { return hx::Val( getPropBool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Properties_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { _props=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Properties_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_props","\xb1","\x2e","\x77","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Properties_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Properties_obj,_props),HX_HCSTRING("_props","\xb1","\x2e","\x77","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Properties_obj_sStaticStorageInfo = 0;
#endif

static ::String Properties_obj_sMemberFields[] = {
	HX_HCSTRING("_props","\xb1","\x2e","\x77","\xc4"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("getProp","\x59","\x77","\xe1","\x1c"),
	HX_HCSTRING("getPropInt","\x16","\xab","\x2e","\x49"),
	HX_HCSTRING("getPropBool","\x23","\x48","\x07","\xbb"),
	HX_HCSTRING("getPropCol","\x67","\x1e","\x2a","\x49"),
	HX_HCSTRING("setProp","\x65","\x08","\xe3","\x0f"),
	HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"),
	HX_HCSTRING("addAll","\x80","\x09","\xfb","\x9e"),
	::String(null()) };

static void Properties_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Properties_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Properties_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Properties_obj::__mClass,"__mClass");
};

#endif

hx::Class Properties_obj::__mClass;

void Properties_obj::__register()
{
	hx::Object *dummy = new Properties_obj;
	Properties_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.util.Properties","\x2d","\xda","\xfd","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Properties_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Properties_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Properties_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Properties_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Properties_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Properties_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util

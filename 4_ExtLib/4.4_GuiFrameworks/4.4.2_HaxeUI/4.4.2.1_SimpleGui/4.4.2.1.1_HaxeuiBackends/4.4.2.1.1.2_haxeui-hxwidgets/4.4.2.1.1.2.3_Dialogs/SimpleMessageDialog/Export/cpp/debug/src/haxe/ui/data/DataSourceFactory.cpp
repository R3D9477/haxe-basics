// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSourceFactory
#include <haxe/ui/data/DataSourceFactory.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_96aa0f5bdbca850b_4_new,"haxe.ui.data.DataSourceFactory","new",0xb5ff0845,"haxe.ui.data.DataSourceFactory.new","haxe/ui/data/DataSourceFactory.hx",4,0x789e82ac)
HX_LOCAL_STACK_FRAME(_hx_pos_96aa0f5bdbca850b_7_create,"haxe.ui.data.DataSourceFactory","create",0x555e6c37,"haxe.ui.data.DataSourceFactory.create","haxe/ui/data/DataSourceFactory.hx",7,0x789e82ac)
HX_LOCAL_STACK_FRAME(_hx_pos_96aa0f5bdbca850b_12_fromString,"haxe.ui.data.DataSourceFactory","fromString",0x7acdec96,"haxe.ui.data.DataSourceFactory.fromString","haxe/ui/data/DataSourceFactory.hx",12,0x789e82ac)
HX_LOCAL_STACK_FRAME(_hx_pos_96aa0f5bdbca850b_31_xml2Object,"haxe.ui.data.DataSourceFactory","xml2Object",0xa458ee55,"haxe.ui.data.DataSourceFactory.xml2Object","haxe/ui/data/DataSourceFactory.hx",31,0x789e82ac)
namespace haxe{
namespace ui{
namespace data{

void DataSourceFactory_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_96aa0f5bdbca850b_4_new)
            	}

Dynamic DataSourceFactory_obj::__CreateEmpty() { return new DataSourceFactory_obj; }

void *DataSourceFactory_obj::_hx_vtable = 0;

Dynamic DataSourceFactory_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DataSourceFactory_obj > _hx_result = new DataSourceFactory_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataSourceFactory_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x075f2fa1;
}

 ::haxe::ui::data::DataSource DataSourceFactory_obj::create(hx::Class type){
            	HX_STACKFRAME(&_hx_pos_96aa0f5bdbca850b_7_create)
HXLINE(   8)		 ::haxe::ui::data::DataSource ds = ( ( ::haxe::ui::data::DataSource)(::Type_obj::createInstance(type,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(   9)		return ds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataSourceFactory_obj,create,return )

 ::haxe::ui::data::DataSource DataSourceFactory_obj::fromString(::String data,hx::Class type){
            	HX_GC_STACKFRAME(&_hx_pos_96aa0f5bdbca850b_12_fromString)
HXLINE(  13)		 ::haxe::ui::data::DataSource ds = this->create(type);
HXLINE(  15)		if (::StringTools_obj::startsWith(data,HX_("<",3c,00,00,00))) {
HXLINE(  16)			 ::Xml xml = ::Xml_obj::parse(data)->firstElement();
HXLINE(  17)			{
HXLINE(  17)				 ::Dynamic el = xml->elements();
HXDLIN(  17)				while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  17)					 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  18)					 ::Dynamic o = this->xml2Object(el1,null());
HXLINE(  19)					ds->add(o);
            				}
            			}
            		}
            		else {
HXLINE(  21)			if (::StringTools_obj::startsWith(data,HX_("[",5b,00,00,00))) {
HXLINE(  22)				::cpp::VirtualArray json = ( (::cpp::VirtualArray)( ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,::StringTools_obj::replace(data,HX_("'",27,00,00,00),HX_("\"",22,00,00,00)))->parseRec()) );
HXLINE(  23)				{
HXLINE(  23)					int _g = (int)0;
HXDLIN(  23)					while((_g < json->get_length())){
HXLINE(  23)						 ::Dynamic o1 = json->__get(_g);
HXDLIN(  23)						_g = (_g + (int)1);
HXLINE(  24)						ds->add(o1);
            					}
            				}
            			}
            		}
HXLINE(  28)		return ds;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSourceFactory_obj,fromString,return )

 ::Dynamic DataSourceFactory_obj::xml2Object( ::Xml el,hx::Null< bool >  __o_addId){
bool addId = __o_addId.Default(true);
            	HX_STACKFRAME(&_hx_pos_96aa0f5bdbca850b_31_xml2Object)
HXLINE(  32)		 ::Dynamic o =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE(  34)		if ((addId == true)) {
HXLINE(  35)			if ((el->nodeType != ::Xml_obj::Element)) {
HXLINE(  35)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + el->nodeType));
            			}
HXDLIN(  35)			::Reflect_obj::setField(o,HX_("id",db,5b,00,00),el->nodeName);
            		}
HXLINE(  38)		{
HXLINE(  38)			 ::Dynamic attr = el->attributes();
HXDLIN(  38)			while(( (bool)(attr->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  38)				::String attr1 = ( (::String)(attr->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  39)				::Reflect_obj::setField(o,attr1,el->get(attr1));
            			}
            		}
HXLINE(  42)		{
HXLINE(  42)			 ::Dynamic childEl = el->elements();
HXDLIN(  42)			while(( (bool)(childEl->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  42)				 ::Xml childEl1 = ( ( ::Xml)(childEl->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  43)				 ::Dynamic childObject = this->xml2Object(childEl1,false);
HXLINE(  44)				if ((childEl1->nodeType != ::Xml_obj::Element)) {
HXLINE(  44)					HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + childEl1->nodeType));
            				}
HXDLIN(  44)				::Reflect_obj::setField(o,childEl1->nodeName,childObject);
            			}
            		}
HXLINE(  47)		return o;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataSourceFactory_obj,xml2Object,return )


hx::ObjectPtr< DataSourceFactory_obj > DataSourceFactory_obj::__new() {
	hx::ObjectPtr< DataSourceFactory_obj > __this = new DataSourceFactory_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DataSourceFactory_obj > DataSourceFactory_obj::__alloc(hx::Ctx *_hx_ctx) {
	DataSourceFactory_obj *__this = (DataSourceFactory_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceFactory_obj), false, "haxe.ui.data.DataSourceFactory"));
	*(void **)__this = DataSourceFactory_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataSourceFactory_obj::DataSourceFactory_obj()
{
}

hx::Val DataSourceFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return hx::Val( fromString_dyn() ); }
		if (HX_FIELD_EQ(inName,"xml2Object") ) { return hx::Val( xml2Object_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DataSourceFactory_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DataSourceFactory_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceFactory_obj_sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("xml2Object","\x9a","\x2f","\xff","\x7d"),
	::String(null()) };

static void DataSourceFactory_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSourceFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DataSourceFactory_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSourceFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class DataSourceFactory_obj::__mClass;

void DataSourceFactory_obj::__register()
{
	hx::Object *dummy = new DataSourceFactory_obj;
	DataSourceFactory_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.data.DataSourceFactory","\xd3","\x81","\xe2","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DataSourceFactory_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DataSourceFactory_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataSourceFactory_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DataSourceFactory_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSourceFactory_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSourceFactory_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data

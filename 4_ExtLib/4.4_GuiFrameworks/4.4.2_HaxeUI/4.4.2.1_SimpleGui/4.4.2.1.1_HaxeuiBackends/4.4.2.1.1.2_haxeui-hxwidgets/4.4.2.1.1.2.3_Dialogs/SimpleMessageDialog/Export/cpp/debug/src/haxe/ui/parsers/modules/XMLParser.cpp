// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_Module
#include <haxe/ui/parsers/modules/Module.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationComponentRefEntry
#include <haxe/ui/parsers/modules/ModuleAnimationComponentRefEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationEntry
#include <haxe/ui/parsers/modules/ModuleAnimationEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleAnimationKeyFrameEntry
#include <haxe/ui/parsers/modules/ModuleAnimationKeyFrameEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleComponentEntry
#include <haxe/ui/parsers/modules/ModuleComponentEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleParser
#include <haxe/ui/parsers/modules/ModuleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePluginEntry
#include <haxe/ui/parsers/modules/ModulePluginEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePreloadEntry
#include <haxe/ui/parsers/modules/ModulePreloadEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModulePropertyEntry
#include <haxe/ui/parsers/modules/ModulePropertyEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleResourceEntry
#include <haxe/ui/parsers/modules/ModuleResourceEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleScriptletEntry
#include <haxe/ui/parsers/modules/ModuleScriptletEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeEntry
#include <haxe/ui/parsers/modules/ModuleThemeEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_ModuleThemeStyleEntry
#include <haxe/ui/parsers/modules/ModuleThemeStyleEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_modules_XMLParser
#include <haxe/ui/parsers/modules/XMLParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a94416f79f5aca9d_6_new,"haxe.ui.parsers.modules.XMLParser","new",0xcc136df5,"haxe.ui.parsers.modules.XMLParser.new","haxe/ui/parsers/modules/XMLParser.hx",6,0xb03b11bd)
HX_LOCAL_STACK_FRAME(_hx_pos_a94416f79f5aca9d_9_parse,"haxe.ui.parsers.modules.XMLParser","parse",0xae677d08,"haxe.ui.parsers.modules.XMLParser.parse","haxe/ui/parsers/modules/XMLParser.hx",9,0xb03b11bd)
HX_LOCAL_STACK_FRAME(_hx_pos_a94416f79f5aca9d_127_buildCondition,"haxe.ui.parsers.modules.XMLParser","buildCondition",0x01106918,"haxe.ui.parsers.modules.XMLParser.buildCondition","haxe/ui/parsers/modules/XMLParser.hx",127,0xb03b11bd)
namespace haxe{
namespace ui{
namespace parsers{
namespace modules{

void XMLParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a94416f79f5aca9d_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic XMLParser_obj::__CreateEmpty() { return new XMLParser_obj; }

void *XMLParser_obj::_hx_vtable = 0;

Dynamic XMLParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< XMLParser_obj > _hx_result = new XMLParser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool XMLParser_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x078bbee0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x078bbee0;
	} else {
		return inClassId==(int)0x391625a5;
	}
}

 ::haxe::ui::parsers::modules::Module XMLParser_obj::parse(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_a94416f79f5aca9d_9_parse)
HXLINE(  10)		 ::haxe::ui::parsers::modules::Module module =  ::haxe::ui::parsers::modules::Module_obj::__alloc( HX_CTX );
HXLINE(  12)		 ::Xml xml = ::Xml_obj::parse(data)->firstElement();
HXLINE(  13)		module->id = xml->get(HX_("id",db,5b,00,00));
HXLINE(  15)		{
HXLINE(  15)			 ::Dynamic el = xml->elements();
HXDLIN(  15)			while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  15)				 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  16)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  16)					HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + el1->nodeType));
            				}
HXDLIN(  16)				::String nodeName = el1->nodeName;
HXLINE(  18)				if ((nodeName == HX_("resources",e5,d7,b0,39))) {
HXLINE(  19)					 ::Dynamic resourceNode = el1->elementsNamed(HX_("resource",ce,5c,a0,12));
HXDLIN(  19)					while(( (bool)(resourceNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  19)						 ::Xml resourceNode1 = ( ( ::Xml)(resourceNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  20)						 ::haxe::ui::parsers::modules::ModuleResourceEntry resourceEntry =  ::haxe::ui::parsers::modules::ModuleResourceEntry_obj::__alloc( HX_CTX );
HXLINE(  21)						resourceEntry->path = resourceNode1->get(HX_("path",a5,e5,51,4a));
HXLINE(  22)						resourceEntry->prefix = resourceNode1->get(HX_("prefix",92,d9,b6,ae));
HXLINE(  23)						resourceEntry->condition = this->buildCondition(el1,resourceNode1);
HXLINE(  24)						module->resourceEntries->push(resourceEntry);
            					}
            				}
            				else {
HXLINE(  26)					if ((nodeName == HX_("components",16,b5,1e,5a))) {
HXLINE(  27)						 ::Dynamic classNode = el1->elementsNamed(HX_("class",38,78,58,48));
HXDLIN(  27)						while(( (bool)(classNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  27)							 ::Xml classNode1 = ( ( ::Xml)(classNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  28)							 ::haxe::ui::parsers::modules::ModuleComponentEntry classEntry =  ::haxe::ui::parsers::modules::ModuleComponentEntry_obj::__alloc( HX_CTX );
HXLINE(  29)							classEntry->classPackage = classNode1->get(HX_("package",86,2b,b1,41));
HXLINE(  30)							classEntry->className = classNode1->get(HX_("name",4b,72,ff,48));
HXLINE(  31)							classEntry->classAlias = classNode1->get(HX_("alias",90,51,91,21));
HXLINE(  32)							module->componentEntries->push(classEntry);
            						}
            					}
            					else {
HXLINE(  34)						if ((nodeName == HX_("scriptlets",c3,c3,b7,55))) {
HXLINE(  35)							 ::Dynamic classNode2 = el1->elementsNamed(HX_("import",65,a1,82,08));
HXDLIN(  35)							while(( (bool)(classNode2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  35)								 ::Xml classNode3 = ( ( ::Xml)(classNode2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  36)								 ::haxe::ui::parsers::modules::ModuleScriptletEntry scriptletEntry =  ::haxe::ui::parsers::modules::ModuleScriptletEntry_obj::__alloc( HX_CTX );
HXLINE(  37)								scriptletEntry->classPackage = classNode3->get(HX_("package",86,2b,b1,41));
HXLINE(  38)								scriptletEntry->className = classNode3->get(HX_("class",38,78,58,48));
HXLINE(  39)								scriptletEntry->classAlias = classNode3->get(HX_("alias",90,51,91,21));
HXLINE(  40)								scriptletEntry->keep = (classNode3->get(HX_("keep",85,d0,06,47)) == HX_("true",4e,a7,03,4d));
HXLINE(  41)								scriptletEntry->staticClass = (classNode3->get(HX_("static",ae,dc,fb,05)) == HX_("true",4e,a7,03,4d));
HXLINE(  42)								module->scriptletEntries->push(scriptletEntry);
            							}
            						}
            						else {
HXLINE(  44)							if ((nodeName == HX_("themes",4a,ca,27,86))) {
HXLINE(  45)								 ::Dynamic themeNode = el1->elements();
HXDLIN(  45)								while(( (bool)(themeNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  45)									 ::Xml themeNode1 = ( ( ::Xml)(themeNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  46)									 ::haxe::ui::parsers::modules::ModuleThemeEntry theme =  ::haxe::ui::parsers::modules::ModuleThemeEntry_obj::__alloc( HX_CTX );
HXLINE(  47)									if ((themeNode1->nodeType != ::Xml_obj::Element)) {
HXLINE(  47)										HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + themeNode1->nodeType));
            									}
HXDLIN(  47)									theme->name = themeNode1->nodeName;
HXLINE(  48)									theme->parent = themeNode1->get(HX_("parent",2a,05,7e,ed));
HXLINE(  49)									{
HXLINE(  49)										 ::Dynamic styleNodes = themeNode1->elementsNamed(HX_("style",31,a5,1d,84));
HXDLIN(  49)										while(( (bool)(styleNodes->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  49)											 ::Xml styleNodes1 = ( ( ::Xml)(styleNodes->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  50)											 ::haxe::ui::parsers::modules::ModuleThemeStyleEntry styleEntry =  ::haxe::ui::parsers::modules::ModuleThemeStyleEntry_obj::__alloc( HX_CTX );
HXLINE(  51)											styleEntry->resource = styleNodes1->get(HX_("resource",ce,5c,a0,12));
HXLINE(  52)											styleEntry->condition = this->buildCondition(styleNodes1,themeNode1);
HXLINE(  53)											theme->styles->push(styleEntry);
            										}
            									}
HXLINE(  55)									module->themeEntries->set(theme->name,theme);
            								}
            							}
            							else {
HXLINE(  57)								if ((nodeName == HX_("plugins",60,d2,35,02))) {
HXLINE(  58)									 ::Dynamic pluginNode = el1->elementsNamed(HX_("plugin",b3,8a,e3,44));
HXDLIN(  58)									while(( (bool)(pluginNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  58)										 ::Xml pluginNode1 = ( ( ::Xml)(pluginNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  59)										 ::haxe::ui::parsers::modules::ModulePluginEntry plugin =  ::haxe::ui::parsers::modules::ModulePluginEntry_obj::__alloc( HX_CTX );
HXLINE(  60)										{
HXLINE(  60)											 ::Dynamic attr = pluginNode1->attributes();
HXDLIN(  60)											while(( (bool)(attr->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  60)												::String attr1 = ( (::String)(attr->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  61)												::String value = pluginNode1->get(attr1);
HXLINE(  62)												::String _hx_switch_0 = attr1;
            												if (  (_hx_switch_0==HX_("class",38,78,58,48)) ){
HXLINE(  66)													plugin->className = value;
HXDLIN(  66)													goto _hx_goto_9;
            												}
            												if (  (_hx_switch_0==HX_("type",ba,f2,08,4d)) ){
HXLINE(  64)													plugin->type = value;
HXDLIN(  64)													goto _hx_goto_9;
            												}
            												/* default */{
HXLINE(  68)													::haxe::IMap_obj::set(plugin->config,attr1,value);
            												}
            												_hx_goto_9:;
            											}
            										}
HXLINE(  71)										plugin->condition = this->buildCondition(el1,pluginNode1);
HXLINE(  72)										module->plugins->push(plugin);
            									}
            								}
            								else {
HXLINE(  74)									if ((nodeName == HX_("properties",f3,fb,0e,61))) {
HXLINE(  75)										 ::Dynamic propertyNode = el1->elementsNamed(HX_("property",55,48,38,ac));
HXDLIN(  75)										while(( (bool)(propertyNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  75)											 ::Xml propertyNode1 = ( ( ::Xml)(propertyNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  76)											 ::haxe::ui::parsers::modules::ModulePropertyEntry property =  ::haxe::ui::parsers::modules::ModulePropertyEntry_obj::__alloc( HX_CTX );
HXLINE(  77)											property->name = propertyNode1->get(HX_("name",4b,72,ff,48));
HXLINE(  78)											property->value = propertyNode1->get(HX_("value",71,7f,b8,31));
HXLINE(  79)											module->properties->push(property);
            										}
            									}
            									else {
HXLINE(  81)										if ((nodeName == HX_("animations",ef,34,1c,83))) {
HXLINE(  82)											 ::Dynamic animationNode = el1->elementsNamed(HX_("animation",04,ef,34,4b));
HXDLIN(  82)											while(( (bool)(animationNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  82)												 ::Xml animationNode1 = ( ( ::Xml)(animationNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  83)												 ::haxe::ui::parsers::modules::ModuleAnimationEntry animation =  ::haxe::ui::parsers::modules::ModuleAnimationEntry_obj::__alloc( HX_CTX );
HXLINE(  84)												animation->id = animationNode1->get(HX_("id",db,5b,00,00));
HXLINE(  85)												animation->ease = animationNode1->get(HX_("ease",ee,8b,0c,43));
HXLINE(  87)												{
HXLINE(  87)													 ::Dynamic keyFrameNode = animationNode1->elementsNamed(HX_("keyframe",2e,ae,bf,b7));
HXDLIN(  87)													while(( (bool)(keyFrameNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  87)														 ::Xml keyFrameNode1 = ( ( ::Xml)(keyFrameNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  88)														 ::haxe::ui::parsers::modules::ModuleAnimationKeyFrameEntry keyFrame =  ::haxe::ui::parsers::modules::ModuleAnimationKeyFrameEntry_obj::__alloc( HX_CTX );
HXLINE(  89)														if (hx::IsNotNull( keyFrameNode1->get(HX_("time",0d,cc,fc,4c)) )) {
HXLINE(  90)															keyFrame->time = ::Std_obj::parseInt(keyFrameNode1->get(HX_("time",0d,cc,fc,4c)));
            														}
HXLINE(  93)														{
HXLINE(  93)															 ::Dynamic componentRefNode = keyFrameNode1->elements();
HXDLIN(  93)															while(( (bool)(componentRefNode->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  93)																 ::Xml componentRefNode1 = ( ( ::Xml)(componentRefNode->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  94)																 ::haxe::ui::parsers::modules::ModuleAnimationComponentRefEntry componentRef =  ::haxe::ui::parsers::modules::ModuleAnimationComponentRefEntry_obj::__alloc( HX_CTX );
HXLINE(  95)																if ((componentRefNode1->nodeType != ::Xml_obj::Element)) {
HXLINE(  95)																	HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + componentRefNode1->nodeType));
            																}
HXDLIN(  95)																componentRef->id = componentRefNode1->nodeName;
HXLINE(  96)																{
HXLINE(  96)																	 ::Dynamic attrName = componentRefNode1->attributes();
HXDLIN(  96)																	while(( (bool)(attrName->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  96)																		::String attrName1 = ( (::String)(attrName->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  97)																		::String attrValue = componentRefNode1->get(attrName1);
HXLINE(  98)																		bool _hx_tmp;
HXDLIN(  98)																		if (::StringTools_obj::startsWith(attrValue,HX_("{",7b,00,00,00))) {
HXLINE(  98)																			_hx_tmp = ::StringTools_obj::endsWith(attrValue,HX_("}",7d,00,00,00));
            																		}
            																		else {
HXLINE(  98)																			_hx_tmp = false;
            																		}
HXDLIN(  98)																		if (_hx_tmp) {
HXLINE(  99)																			attrValue = attrValue.substring((int)1,(attrValue.length - (int)1));
HXLINE( 100)																			componentRef->vars->set(attrName1,attrValue);
            																		}
            																		else {
HXLINE( 102)																			::Dynamic this1 = componentRef->properties;
HXDLIN( 102)																			( ( ::haxe::ds::StringMap)(this1) )->set(attrName1,::Std_obj::parseFloat(attrValue));
            																		}
            																	}
            																}
HXLINE( 106)																keyFrame->componentRefs->set(componentRef->id,componentRef);
            															}
            														}
HXLINE( 109)														animation->keyFrames->push(keyFrame);
            													}
            												}
HXLINE( 112)												module->animations->push(animation);
            											}
            										}
            										else {
HXLINE( 114)											if ((nodeName == HX_("preload",c9,47,43,35))) {
HXLINE( 115)												 ::Dynamic propertyNode2 = el1->elements();
HXDLIN( 115)												while(( (bool)(propertyNode2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 115)													 ::Xml propertyNode3 = ( ( ::Xml)(propertyNode2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 116)													 ::haxe::ui::parsers::modules::ModulePreloadEntry entry =  ::haxe::ui::parsers::modules::ModulePreloadEntry_obj::__alloc( HX_CTX );
HXLINE( 117)													if ((propertyNode3->nodeType != ::Xml_obj::Element)) {
HXLINE( 117)														HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + propertyNode3->nodeType));
            													}
HXDLIN( 117)													entry->type = propertyNode3->nodeName;
HXLINE( 118)													entry->id = propertyNode3->get(HX_("id",db,5b,00,00));
HXLINE( 119)													module->preload->push(entry);
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 124)		return module;
            	}


::String XMLParser_obj::buildCondition( ::Xml parentNode, ::Xml node){
            	HX_STACKFRAME(&_hx_pos_a94416f79f5aca9d_127_buildCondition)
HXLINE( 128)		::String condition = parentNode->get(HX_("condition",9b,e9,33,fc));
HXLINE( 129)		if (hx::IsNotNull( parentNode->get(HX_("if",dd,5b,00,00)) )) {
HXLINE( 130)			condition = (HX_("",00,00,00,00) + parentNode->get(HX_("if",dd,5b,00,00)));
            		}
HXLINE( 133)		if (hx::IsNotNull( node->get(HX_("condition",9b,e9,33,fc)) )) {
HXLINE( 134)			condition = node->get(HX_("condition",9b,e9,33,fc));
            		}
HXLINE( 136)		if (hx::IsNotNull( node->get(HX_("if",dd,5b,00,00)) )) {
HXLINE( 137)			condition = (HX_("",00,00,00,00) + node->get(HX_("if",dd,5b,00,00)));
            		}
HXLINE( 140)		return condition;
            	}


HX_DEFINE_DYNAMIC_FUNC2(XMLParser_obj,buildCondition,return )


hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__new() {
	hx::ObjectPtr< XMLParser_obj > __this = new XMLParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	XMLParser_obj *__this = (XMLParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(XMLParser_obj), false, "haxe.ui.parsers.modules.XMLParser"));
	*(void **)__this = XMLParser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

XMLParser_obj::XMLParser_obj()
{
}

hx::Val XMLParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return hx::Val( parse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buildCondition") ) { return hx::Val( buildCondition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *XMLParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *XMLParser_obj_sStaticStorageInfo = 0;
#endif

static ::String XMLParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("buildCondition","\x8d","\x18","\xca","\x77"),
	::String(null()) };

static void XMLParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void XMLParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLParser_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLParser_obj::__mClass;

void XMLParser_obj::__register()
{
	hx::Object *dummy = new XMLParser_obj;
	XMLParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.modules.XMLParser","\x83","\x4f","\x06","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XMLParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(XMLParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XMLParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = XMLParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = XMLParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = XMLParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace modules

// GeneratedByHaxe
#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentBindingInfo
#include <haxe/ui/parsers/ui/ComponentBindingInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#include <haxe/ui/parsers/ui/ComponentInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentParser
#include <haxe/ui/parsers/ui/ComponentParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_XMLParser
#include <haxe/ui/parsers/ui/XMLParser.h>
#endif
#ifndef INCLUDED_haxe_ui_parsers_ui_resolvers_ResourceResolver
#include <haxe/ui/parsers/ui/resolvers/ResourceResolver.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e8eecc968b631a7_8_new,"haxe.ui.parsers.ui.XMLParser","new",0x3c5a825a,"haxe.ui.parsers.ui.XMLParser.new","haxe/ui/parsers/ui/XMLParser.hx",8,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_11_parse,"haxe.ui.parsers.ui.XMLParser","parse",0x0de834ad,"haxe.ui.parsers.ui.XMLParser.parse","haxe/ui/parsers/ui/XMLParser.hx",11,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_26_parseComponent,"haxe.ui.parsers.ui.XMLParser","parseComponent",0xb8eb1e50,"haxe.ui.parsers.ui.XMLParser.parseComponent","haxe/ui/parsers/ui/XMLParser.hx",26,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_64_parseImportNode,"haxe.ui.parsers.ui.XMLParser","parseImportNode",0x0af3a114,"haxe.ui.parsers.ui.XMLParser.parseImportNode","haxe/ui/parsers/ui/XMLParser.hx",64,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_86_parseScriptNode,"haxe.ui.parsers.ui.XMLParser","parseScriptNode",0xfc9b98ba,"haxe.ui.parsers.ui.XMLParser.parseScriptNode","haxe/ui/parsers/ui/XMLParser.hx",86,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_111_parseStyleNode,"haxe.ui.parsers.ui.XMLParser","parseStyleNode",0x8870f566,"haxe.ui.parsers.ui.XMLParser.parseStyleNode","haxe/ui/parsers/ui/XMLParser.hx",111,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_136_parseBindNode,"haxe.ui.parsers.ui.XMLParser","parseBindNode",0x5ce6342c,"haxe.ui.parsers.ui.XMLParser.parseBindNode","haxe/ui/parsers/ui/XMLParser.hx",136,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_144_parseDetails,"haxe.ui.parsers.ui.XMLParser","parseDetails",0x5e056f95,"haxe.ui.parsers.ui.XMLParser.parseDetails","haxe/ui/parsers/ui/XMLParser.hx",144,0x19f9ca56)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8eecc968b631a7_154_parseAttributes,"haxe.ui.parsers.ui.XMLParser","parseAttributes",0x52225be4,"haxe.ui.parsers.ui.XMLParser.parseAttributes","haxe/ui/parsers/ui/XMLParser.hx",154,0x19f9ca56)
namespace haxe{
namespace ui{
namespace parsers{
namespace ui{

void XMLParser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3e8eecc968b631a7_8_new)
HXDLIN(   8)		super::__construct();
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
	if (inClassId<=(int)0x310ae04e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x310ae04e;
	} else {
		return inClassId==(int)0x560e7894;
	}
}

 ::haxe::ui::parsers::ui::ComponentInfo XMLParser_obj::parse(::String data, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_GC_STACKFRAME(&_hx_pos_3e8eecc968b631a7_11_parse)
HXLINE(  12)		this->_resourceResolver = resourceResolver;
HXLINE(  14)		 ::haxe::ui::parsers::ui::ComponentInfo component =  ::haxe::ui::parsers::ui::ComponentInfo_obj::__alloc( HX_CTX );
HXLINE(  16)		 ::Xml xml = ::Xml_obj::parse(data)->firstElement();
HXLINE(  21)		::haxe::ui::parsers::ui::XMLParser_obj::parseComponent(component,xml,resourceResolver);
HXLINE(  23)		return component;
            	}


bool XMLParser_obj::parseComponent( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_GC_STACKFRAME(&_hx_pos_3e8eecc968b631a7_26_parseComponent)
HXLINE(  27)		bool isComponent = true;
HXLINE(  28)		if ((xml->nodeType != ::Xml_obj::Element)) {
HXLINE(  28)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + xml->nodeType));
            		}
HXDLIN(  28)		::String nodeName = xml->nodeName;
HXLINE(  29)		if ((nodeName == HX_("import",65,a1,82,08))) {
HXLINE(  30)			::haxe::ui::parsers::ui::XMLParser_obj::parseImportNode(component->parent,xml,resourceResolver);
HXLINE(  31)			isComponent = false;
            		}
            		else {
HXLINE(  32)			if ((nodeName == HX_("script",0b,4e,60,47))) {
HXLINE(  33)				::haxe::ui::parsers::ui::XMLParser_obj::parseScriptNode(component,xml,resourceResolver);
HXLINE(  34)				isComponent = false;
            			}
            			else {
HXLINE(  35)				if ((nodeName == HX_("style",31,a5,1d,84))) {
HXLINE(  36)					::haxe::ui::parsers::ui::XMLParser_obj::parseStyleNode(component,xml,resourceResolver);
HXLINE(  37)					isComponent = false;
            				}
            				else {
HXLINE(  38)					if ((nodeName == HX_("bind",bd,f5,16,41))) {
HXLINE(  39)						::haxe::ui::parsers::ui::XMLParser_obj::parseBindNode(component,xml);
HXLINE(  40)						isComponent = false;
            					}
            					else {
HXLINE(  41)						if ((nodeName == HX_("data",2a,56,63,42))) {
HXLINE(  42)							if (hx::IsNotNull( xml->firstElement() )) {
HXLINE(  43)								::String _hx_tmp = ::haxe::xml::Printer_obj::print(xml,null());
HXDLIN(  43)								component->parent->data = ::StringTools_obj::trim(_hx_tmp);
            							}
            							else {
HXLINE(  44)								bool _hx_tmp1;
HXDLIN(  44)								if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  44)									_hx_tmp1 = (xml->nodeType != ::Xml_obj::Element);
            								}
            								else {
HXLINE(  44)									_hx_tmp1 = false;
            								}
HXDLIN(  44)								if (_hx_tmp1) {
HXLINE(  44)									HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            								}
HXDLIN(  44)								 ::Xml _this = xml->children->__get((int)0).StaticCast<  ::Xml >();
HXDLIN(  44)								bool _hx_tmp2;
HXDLIN(  44)								if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE(  44)									_hx_tmp2 = (_this->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE(  44)									_hx_tmp2 = true;
            								}
HXDLIN(  44)								if (_hx_tmp2) {
HXLINE(  44)									HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + _this->nodeType));
            								}
HXDLIN(  44)								if (::StringTools_obj::startsWith(::StringTools_obj::trim(_this->nodeValue),HX_("[",5b,00,00,00))) {
HXLINE(  45)									bool _hx_tmp3;
HXDLIN(  45)									if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  45)										_hx_tmp3 = (xml->nodeType != ::Xml_obj::Element);
            									}
            									else {
HXLINE(  45)										_hx_tmp3 = false;
            									}
HXDLIN(  45)									if (_hx_tmp3) {
HXLINE(  45)										HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            									}
HXDLIN(  45)									 ::Xml _this1 = xml->children->__get((int)0).StaticCast<  ::Xml >();
HXDLIN(  45)									bool _hx_tmp4;
HXDLIN(  45)									if ((_this1->nodeType != ::Xml_obj::Document)) {
HXLINE(  45)										_hx_tmp4 = (_this1->nodeType == ::Xml_obj::Element);
            									}
            									else {
HXLINE(  45)										_hx_tmp4 = true;
            									}
HXDLIN(  45)									if (_hx_tmp4) {
HXLINE(  45)										HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + _this1->nodeType));
            									}
HXDLIN(  45)									component->parent->data = ::StringTools_obj::trim(_this1->nodeValue);
            								}
            							}
HXLINE(  47)							isComponent = false;
            						}
            						else {
HXLINE(  49)							::haxe::ui::parsers::ui::XMLParser_obj::parseDetails(component,xml);
HXLINE(  50)							::haxe::ui::parsers::ui::XMLParser_obj::parseAttributes(component,xml);
HXLINE(  52)							{
HXLINE(  52)								 ::Dynamic childXml = xml->elements();
HXDLIN(  52)								while(( (bool)(childXml->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  52)									 ::Xml childXml1 = ( ( ::Xml)(childXml->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  53)									 ::haxe::ui::parsers::ui::ComponentInfo child =  ::haxe::ui::parsers::ui::ComponentInfo_obj::__alloc( HX_CTX );
HXLINE(  54)									child->parent = component;
HXLINE(  55)									if ((::haxe::ui::parsers::ui::XMLParser_obj::parseComponent(child,childXml1,resourceResolver) == true)) {
HXLINE(  56)										component->children->push(child);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  60)		return isComponent;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(XMLParser_obj,parseComponent,return )

void XMLParser_obj::parseImportNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_3e8eecc968b631a7_64_parseImportNode)
HXDLIN(  64)		if (hx::IsNotNull( xml->get(HX_("source",db,b0,31,32)) )) {
HXLINE(  65)			::String source = xml->get(HX_("source",db,b0,31,32));
HXLINE(  66)			::String sourceData = resourceResolver->getResourceData(source);
HXLINE(  67)			if (hx::IsNotNull( sourceData )) {
HXLINE(  68)				::String extension = resourceResolver->extension(source);
HXLINE(  69)				 ::haxe::ui::parsers::ui::ComponentInfo c = ::haxe::ui::parsers::ui::ComponentParser_obj::get(extension)->parse(sourceData,resourceResolver);
HXLINE(  71)				component->findRootComponent()->styles = component->findRootComponent()->styles->concat(c->styles);
HXLINE(  72)				c->styles = ::Array_obj< ::String >::__new(0);
HXLINE(  74)				component->findRootComponent()->scriptlets = component->findRootComponent()->scriptlets->concat(c->scriptlets);
HXLINE(  75)				c->scriptlets = ::Array_obj< ::String >::__new(0);
HXLINE(  77)				component->findRootComponent()->bindings = component->findRootComponent()->bindings->concat(c->bindings);
HXLINE(  78)				c->bindings = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  80)				c->parent = component;
HXLINE(  81)				component->children->push(c);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(XMLParser_obj,parseImportNode,(void))

void XMLParser_obj::parseScriptNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_3e8eecc968b631a7_86_parseScriptNode)
HXLINE(  87)		::String scriptText = null();
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  88)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  88)			_hx_tmp = false;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  88)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            		}
HXDLIN(  88)		if (hx::IsNotNull( xml->children->__get((int)0).StaticCast<  ::Xml >() )) {
HXLINE(  89)			bool scriptText1;
HXDLIN(  89)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  89)				scriptText1 = (xml->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE(  89)				scriptText1 = false;
            			}
HXDLIN(  89)			if (scriptText1) {
HXLINE(  89)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            			}
HXDLIN(  89)			 ::Xml _this = xml->children->__get((int)0).StaticCast<  ::Xml >();
HXDLIN(  89)			bool scriptText2;
HXDLIN(  89)			if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE(  89)				scriptText2 = (_this->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE(  89)				scriptText2 = true;
            			}
HXDLIN(  89)			if (scriptText2) {
HXLINE(  89)				HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + _this->nodeType));
            			}
HXDLIN(  89)			scriptText = _this->nodeValue;
            		}
HXLINE(  92)		if (hx::IsNotNull( xml->get(HX_("source",db,b0,31,32)) )) {
HXLINE(  93)			::String source = xml->get(HX_("source",db,b0,31,32));
HXLINE(  94)			::String sourceData = resourceResolver->getResourceData(source);
HXLINE(  95)			if (hx::IsNotNull( sourceData )) {
HXLINE(  96)				if (hx::IsNull( scriptText )) {
HXLINE(  97)					scriptText = HX_("",00,00,00,00);
            				}
HXLINE(  99)				scriptText = (scriptText + (HX_("\n",0a,00,00,00) + sourceData));
            			}
            		}
HXLINE( 103)		if (hx::IsNotNull( scriptText )) {
HXLINE( 104)			::String scope = HX_("global",63,31,b2,a7);
HXLINE( 105)			if ((scope == HX_("global",63,31,b2,a7))) {
HXLINE( 106)				component->findRootComponent()->scriptlets->push(scriptText);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(XMLParser_obj,parseScriptNode,(void))

void XMLParser_obj::parseStyleNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml, ::haxe::ui::parsers::ui::resolvers::ResourceResolver resourceResolver){
            	HX_STACKFRAME(&_hx_pos_3e8eecc968b631a7_111_parseStyleNode)
HXLINE( 112)		::String styleText = null();
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 113)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 113)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            		}
HXDLIN( 113)		if (hx::IsNotNull( xml->children->__get((int)0).StaticCast<  ::Xml >() )) {
HXLINE( 114)			bool styleText1;
HXDLIN( 114)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 114)				styleText1 = (xml->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE( 114)				styleText1 = false;
            			}
HXDLIN( 114)			if (styleText1) {
HXLINE( 114)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            			}
HXDLIN( 114)			 ::Xml _this = xml->children->__get((int)0).StaticCast<  ::Xml >();
HXDLIN( 114)			bool styleText2;
HXDLIN( 114)			if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE( 114)				styleText2 = (_this->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 114)				styleText2 = true;
            			}
HXDLIN( 114)			if (styleText2) {
HXLINE( 114)				HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + _this->nodeType));
            			}
HXDLIN( 114)			styleText = _this->nodeValue;
            		}
HXLINE( 117)		if (hx::IsNotNull( xml->get(HX_("source",db,b0,31,32)) )) {
HXLINE( 118)			::String source = xml->get(HX_("source",db,b0,31,32));
HXLINE( 119)			::String sourceData = resourceResolver->getResourceData(source);
HXLINE( 120)			if (hx::IsNotNull( sourceData )) {
HXLINE( 121)				if (hx::IsNull( styleText )) {
HXLINE( 122)					styleText = HX_("",00,00,00,00);
            				}
HXLINE( 124)				styleText = (styleText + (HX_("\n",0a,00,00,00) + sourceData));
            			}
            		}
HXLINE( 128)		if (hx::IsNotNull( styleText )) {
HXLINE( 129)			::String scope = HX_("global",63,31,b2,a7);
HXLINE( 130)			if ((scope == HX_("global",63,31,b2,a7))) {
HXLINE( 131)				component->findRootComponent()->styles->push(styleText);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(XMLParser_obj,parseStyleNode,(void))

void XMLParser_obj::parseBindNode( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml){
            	HX_GC_STACKFRAME(&_hx_pos_3e8eecc968b631a7_136_parseBindNode)
HXLINE( 137)		 ::haxe::ui::parsers::ui::ComponentBindingInfo binding =  ::haxe::ui::parsers::ui::ComponentBindingInfo_obj::__alloc( HX_CTX );
HXLINE( 138)		binding->source = xml->get(HX_("source",db,b0,31,32));
HXLINE( 139)		binding->target = xml->get(HX_("target",51,f3,ec,86));
HXLINE( 140)		binding->transform = xml->get(HX_("transform",6c,2d,93,45));
HXLINE( 141)		component->findRootComponent()->bindings->push(binding);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLParser_obj,parseBindNode,(void))

void XMLParser_obj::parseDetails( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml){
            	HX_STACKFRAME(&_hx_pos_3e8eecc968b631a7_144_parseDetails)
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		bool _hx_tmp1;
HXDLIN( 145)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 145)			_hx_tmp1 = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 145)			_hx_tmp1 = false;
            		}
HXDLIN( 145)		if (_hx_tmp1) {
HXLINE( 145)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            		}
HXDLIN( 145)		if (hx::IsNotNull( xml->children->__get((int)0).StaticCast<  ::Xml >() )) {
HXLINE( 145)			bool _hx_tmp2;
HXDLIN( 145)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 145)				_hx_tmp2 = (xml->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE( 145)				_hx_tmp2 = false;
            			}
HXDLIN( 145)			if (_hx_tmp2) {
HXLINE( 145)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            			}
HXDLIN( 145)			_hx_tmp = ((HX_("",00,00,00,00) + xml->children->__get((int)0).StaticCast<  ::Xml >()->nodeType) == HX_("1",31,00,00,00));
            		}
            		else {
HXLINE( 145)			_hx_tmp = false;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 146)			bool value;
HXDLIN( 146)			if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE( 146)				value = (xml->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE( 146)				value = false;
            			}
HXDLIN( 146)			if (value) {
HXLINE( 146)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + xml->nodeType));
            			}
HXDLIN( 146)			 ::Xml _this = xml->children->__get((int)0).StaticCast<  ::Xml >();
HXDLIN( 146)			bool value1;
HXDLIN( 146)			if ((_this->nodeType != ::Xml_obj::Document)) {
HXLINE( 146)				value1 = (_this->nodeType == ::Xml_obj::Element);
            			}
            			else {
HXLINE( 146)				value1 = true;
            			}
HXDLIN( 146)			if (value1) {
HXLINE( 146)				HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + _this->nodeType));
            			}
HXDLIN( 146)			::String value2 = ::StringTools_obj::trim(_this->nodeValue);
HXLINE( 147)			bool _hx_tmp3;
HXDLIN( 147)			if (hx::IsNotNull( value2 )) {
HXLINE( 147)				_hx_tmp3 = (value2.length > (int)0);
            			}
            			else {
HXLINE( 147)				_hx_tmp3 = false;
            			}
HXDLIN( 147)			if (_hx_tmp3) {
HXLINE( 148)				component->text = value2;
            			}
            		}
HXLINE( 151)		if ((xml->nodeType != ::Xml_obj::Element)) {
HXLINE( 151)			HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + xml->nodeType));
            		}
HXDLIN( 151)		component->type = xml->nodeName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLParser_obj,parseDetails,(void))

void XMLParser_obj::parseAttributes( ::haxe::ui::parsers::ui::ComponentInfo component, ::Xml xml){
            	HX_GC_STACKFRAME(&_hx_pos_3e8eecc968b631a7_154_parseAttributes)
HXLINE( 155)		{
HXLINE( 155)			 ::Dynamic attrName = xml->attributes();
HXDLIN( 155)			while(( (bool)(attrName->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 155)				::String attrName1 = ( (::String)(attrName->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 156)				::String attrValue = xml->get(attrName1);
HXLINE( 157)				::String _hx_switch_0 = attrName1;
            				if (  (_hx_switch_0==HX_("bindTo",98,e8,0d,ed)) ||  (_hx_switch_0==HX_("bindTransform",ef,f7,42,0f)) ){
HXLINE( 212)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("composite",07,10,a5,12)) ){
HXLINE( 209)					component->composite = (attrValue == HX_("true",4e,a7,03,4d));
HXDLIN( 209)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("condition",9b,e9,33,fc)) ){
HXLINE( 159)					component->condition = attrValue;
HXDLIN( 159)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("contentHeight",00,3a,47,d8)) ){
HXLINE( 197)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage(attrValue) == true)) {
HXLINE( 198)						component->percentContentHeight = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
            					else {
HXLINE( 200)						component->contentHeight = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
HXLINE( 197)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("contentWidth",0d,0a,f1,b0)) ){
HXLINE( 191)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage(attrValue) == true)) {
HXLINE( 192)						component->percentContentWidth = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
            					else {
HXLINE( 194)						component->contentWidth = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
HXLINE( 191)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE( 185)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage(attrValue) == true)) {
HXLINE( 186)						component->percentHeight = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
            					else {
HXLINE( 188)						component->height = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
HXLINE( 185)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("id",db,5b,00,00)) ){
HXLINE( 173)					component->id = attrValue;
HXDLIN( 173)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("if",dd,5b,00,00)) ){
HXLINE( 161)					::Array< ::String > condition = ::Array_obj< ::String >::__new(0);
HXLINE( 162)					{
HXLINE( 162)						int _g = (int)0;
HXDLIN( 162)						::Array< ::String > _g1 = attrValue.split(HX_(",",2c,00,00,00));
HXDLIN( 162)						while((_g < _g1->length)){
HXLINE( 162)							::String t = _g1->__get(_g);
HXDLIN( 162)							_g = (_g + (int)1);
HXLINE( 163)							condition->push(((HX_("backend == \"",ee,f4,64,87) + ::StringTools_obj::trim(t)) + HX_("\"",22,00,00,00)));
            						}
            					}
HXLINE( 165)					component->condition = condition->join(HX_(" || ",80,57,85,15));
HXLINE( 160)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("layout",aa,ae,b8,58)) ){
HXLINE( 211)					component->layoutName = attrValue;
HXDLIN( 211)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 175)					component->left = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
HXDLIN( 175)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("style",31,a5,1d,84)) ){
HXLINE( 205)					component->style = attrValue;
HXDLIN( 205)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("styleName",1c,30,cf,de)) ||  (_hx_switch_0==HX_("styleNames",d7,e8,7a,16)) ){
HXLINE( 207)					component->styleNames = attrValue;
HXDLIN( 207)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("text",ad,cc,f9,4c)) ){
HXLINE( 203)					component->text = attrValue;
HXDLIN( 203)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE( 177)					component->top = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
HXDLIN( 177)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("unless",32,1a,85,65)) ){
HXLINE( 167)					::Array< ::String > condition1 = ::Array_obj< ::String >::__new(0);
HXLINE( 168)					{
HXLINE( 168)						int _g2 = (int)0;
HXDLIN( 168)						::Array< ::String > _g11 = attrValue.split(HX_(",",2c,00,00,00));
HXDLIN( 168)						while((_g2 < _g11->length)){
HXLINE( 168)							::String t1 = _g11->__get(_g2);
HXDLIN( 168)							_g2 = (_g2 + (int)1);
HXLINE( 169)							condition1->push(((HX_("backend != \"",8a,fb,e2,74) + ::StringTools_obj::trim(t1)) + HX_("\"",22,00,00,00)));
            						}
            					}
HXLINE( 171)					component->condition = condition1->join(HX_(" && ",c0,ca,43,15));
HXLINE( 166)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE( 179)					if ((::haxe::ui::parsers::ui::ComponentParser_obj::isPercentage(attrValue) == true)) {
HXLINE( 180)						component->percentWidth = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
            					else {
HXLINE( 182)						component->width = ::haxe::ui::parsers::ui::ComponentParser_obj::_hx_float(attrValue);
            					}
HXLINE( 179)					goto _hx_goto_10;
            				}
            				/* default */{
HXLINE( 214)					if ((attrName1 == HX_("group",3f,b3,f4,99))) {
HXLINE( 215)						attrName1 = HX_("groupName",2a,5d,e1,d7);
            					}
HXLINE( 217)					::haxe::IMap_obj::set(component->properties,attrName1,attrValue);
            				}
            				_hx_goto_10:;
            			}
            		}
HXLINE( 221)		::String bindTo = xml->get(HX_("bindTo",98,e8,0d,ed));
HXLINE( 222)		if (hx::IsNotNull( bindTo )) {
HXLINE( 223)			if (hx::IsNull( component->id )) {
HXLINE( 224)				component->id = ::haxe::ui::parsers::ui::ComponentParser_obj::nextId(null());
            			}
HXLINE( 227)			 ::haxe::ui::parsers::ui::ComponentBindingInfo binding =  ::haxe::ui::parsers::ui::ComponentBindingInfo_obj::__alloc( HX_CTX );
HXLINE( 228)			binding->source = bindTo;
HXLINE( 229)			binding->target = component->id;
HXLINE( 230)			binding->transform = xml->get(HX_("bindTransform",ef,f7,42,0f));
HXLINE( 231)			component->findRootComponent()->bindings->push(binding);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XMLParser_obj,parseAttributes,(void))


hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__new() {
	hx::ObjectPtr< XMLParser_obj > __this = new XMLParser_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< XMLParser_obj > XMLParser_obj::__alloc(hx::Ctx *_hx_ctx) {
	XMLParser_obj *__this = (XMLParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(XMLParser_obj), true, "haxe.ui.parsers.ui.XMLParser"));
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
	}
	return super::__Field(inName,inCallProp);
}

bool XMLParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parseDetails") ) { outValue = parseDetails_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseBindNode") ) { outValue = parseBindNode_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseComponent") ) { outValue = parseComponent_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseStyleNode") ) { outValue = parseStyleNode_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseImportNode") ) { outValue = parseImportNode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseScriptNode") ) { outValue = parseScriptNode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseAttributes") ) { outValue = parseAttributes_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *XMLParser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *XMLParser_obj_sStaticStorageInfo = 0;
#endif

static ::String XMLParser_obj_sMemberFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
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

static ::String XMLParser_obj_sStaticFields[] = {
	HX_HCSTRING("parseComponent","\x0a","\x22","\x75","\x53"),
	HX_HCSTRING("parseImportNode","\x1a","\xe0","\x2c","\xa9"),
	HX_HCSTRING("parseScriptNode","\xc0","\xd7","\xd4","\x9a"),
	HX_HCSTRING("parseStyleNode","\x20","\xf9","\xfa","\x22"),
	HX_HCSTRING("parseBindNode","\xb2","\x85","\x03","\xfc"),
	HX_HCSTRING("parseDetails","\xcf","\x30","\x31","\x05"),
	HX_HCSTRING("parseAttributes","\xea","\x9a","\x5b","\xf0"),
	::String(null())
};

void XMLParser_obj::__register()
{
	hx::Object *dummy = new XMLParser_obj;
	XMLParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.parsers.ui.XMLParser","\x68","\x0d","\x68","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XMLParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = XMLParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(XMLParser_obj_sStaticFields);
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
} // end namespace ui

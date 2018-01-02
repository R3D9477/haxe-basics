// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c35276c6c34c9d18_44_new,"haxe.xml.Printer","new",0x896dce4d,"haxe.xml.Printer.new","/usr/share/haxe/std/haxe/xml/Printer.hx",44,0x1415cbea)
HX_LOCAL_STACK_FRAME(_hx_pos_c35276c6c34c9d18_50_writeNode,"haxe.xml.Printer","writeNode",0x6952ac2e,"haxe.xml.Printer.writeNode","/usr/share/haxe/std/haxe/xml/Printer.hx",50,0x1415cbea)
static const ::String _hx_array_data_d3e3a3db_5[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_6[] = {
	HX_(">",3e,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_7[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_8[] = {
	HX_(">",3e,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_9[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_10[] = {
	HX_("/>",2f,29,00,00),
};
static const ::String _hx_array_data_d3e3a3db_11[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_12[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_13[] = {
	HX_("]]>",de,e2,46,00),
};
static const ::String _hx_array_data_d3e3a3db_14[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_15[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_16[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_d3e3a3db_17[] = {
	HX_("\n",0a,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c35276c6c34c9d18_114_hasChildren,"haxe.xml.Printer","hasChildren",0xeb7e31a6,"haxe.xml.Printer.hasChildren","/usr/share/haxe/std/haxe/xml/Printer.hx",114,0x1415cbea)
HX_LOCAL_STACK_FRAME(_hx_pos_c35276c6c34c9d18_35_print,"haxe.xml.Printer","print",0x4a926b5a,"haxe.xml.Printer.print","/usr/share/haxe/std/haxe/xml/Printer.hx",35,0x1415cbea)
namespace haxe{
namespace xml{

void Printer_obj::__construct(bool pretty){
            	HX_GC_STACKFRAME(&_hx_pos_c35276c6c34c9d18_44_new)
HXLINE(  45)		this->output =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  46)		this->pretty = pretty;
            	}

Dynamic Printer_obj::__CreateEmpty() { return new Printer_obj; }

void *Printer_obj::_hx_vtable = 0;

Dynamic Printer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Printer_obj > _hx_result = new Printer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Printer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07347fa9;
}

void Printer_obj::writeNode( ::Xml value,::String tabs){
            	HX_GC_STACKFRAME(&_hx_pos_c35276c6c34c9d18_50_writeNode)
HXDLIN(  50)		int _g = value->nodeType;
HXDLIN(  50)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  68)				{
HXLINE(  68)					::String input = (tabs + HX_("<",3c,00,00,00));
HXDLIN(  68)					{
HXLINE(  68)						 ::StringBuf _this = this->output;
HXDLIN(  68)						if (hx::IsNotNull( _this->charBuf )) {
HXLINE(  68)							_this->flush();
            						}
HXDLIN(  68)						if (hx::IsNull( _this->b )) {
HXLINE(  68)							_this->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input));
            						}
            						else {
HXLINE(  68)							::Array< ::String > _this1 = _this->b;
HXDLIN(  68)							_this1->push(::Std_obj::string(input));
            						}
            					}
            				}
HXLINE(  69)				{
HXLINE(  69)					if ((value->nodeType != ::Xml_obj::Element)) {
HXLINE(  69)						HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + value->nodeType));
            					}
HXDLIN(  69)					::String input1 = value->nodeName;
HXDLIN(  69)					{
HXLINE(  69)						 ::StringBuf _this2 = this->output;
HXDLIN(  69)						if (hx::IsNotNull( _this2->charBuf )) {
HXLINE(  69)							_this2->flush();
            						}
HXDLIN(  69)						if (hx::IsNull( _this2->b )) {
HXLINE(  69)							_this2->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input1));
            						}
            						else {
HXLINE(  69)							::Array< ::String > _this3 = _this2->b;
HXDLIN(  69)							_this3->push(::Std_obj::string(input1));
            						}
            					}
            				}
HXLINE(  70)				{
HXLINE(  70)					 ::Dynamic attribute = value->attributes();
HXDLIN(  70)					while(( (bool)(attribute->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  70)						::String attribute1 = ( (::String)(attribute->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  71)						{
HXLINE(  71)							::String input2 = ((HX_(" ",20,00,00,00) + attribute1) + HX_("=\"",45,35,00,00));
HXDLIN(  71)							{
HXLINE(  71)								 ::StringBuf _this4 = this->output;
HXDLIN(  71)								if (hx::IsNotNull( _this4->charBuf )) {
HXLINE(  71)									_this4->flush();
            								}
HXDLIN(  71)								if (hx::IsNull( _this4->b )) {
HXLINE(  71)									_this4->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input2));
            								}
            								else {
HXLINE(  71)									::Array< ::String > _this5 = _this4->b;
HXDLIN(  71)									_this5->push(::Std_obj::string(input2));
            								}
            							}
            						}
HXLINE(  72)						{
HXLINE(  72)							::String input3 = ::StringTools_obj::htmlEscape(value->get(attribute1),true);
HXDLIN(  72)							{
HXLINE(  72)								 ::StringBuf _this6 = this->output;
HXDLIN(  72)								if (hx::IsNotNull( _this6->charBuf )) {
HXLINE(  72)									_this6->flush();
            								}
HXDLIN(  72)								if (hx::IsNull( _this6->b )) {
HXLINE(  72)									_this6->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input3));
            								}
            								else {
HXLINE(  72)									::Array< ::String > _this7 = _this6->b;
HXDLIN(  72)									_this7->push(::Std_obj::string(input3));
            								}
            							}
            						}
HXLINE(  73)						{
HXLINE(  73)							 ::StringBuf _this8 = this->output;
HXDLIN(  73)							if (hx::IsNotNull( _this8->charBuf )) {
HXLINE(  73)								_this8->flush();
            							}
HXDLIN(  73)							if (hx::IsNull( _this8->b )) {
HXLINE(  73)								_this8->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_5,1);
            							}
            							else {
HXLINE(  73)								_this8->b->push(HX_("\"",22,00,00,00));
            							}
            						}
            					}
            				}
HXLINE(  75)				if (this->hasChildren(value)) {
HXLINE(  76)					{
HXLINE(  76)						 ::StringBuf _this9 = this->output;
HXDLIN(  76)						if (hx::IsNotNull( _this9->charBuf )) {
HXLINE(  76)							_this9->flush();
            						}
HXDLIN(  76)						if (hx::IsNull( _this9->b )) {
HXLINE(  76)							_this9->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_6,1);
            						}
            						else {
HXLINE(  76)							_this9->b->push(HX_(">",3e,00,00,00));
            						}
            					}
HXLINE(  77)					if (this->pretty) {
HXLINE(  77)						 ::StringBuf _this10 = this->output;
HXDLIN(  77)						if (hx::IsNotNull( _this10->charBuf )) {
HXLINE(  77)							_this10->flush();
            						}
HXDLIN(  77)						if (hx::IsNull( _this10->b )) {
HXLINE(  77)							_this10->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_7,1);
            						}
            						else {
HXLINE(  77)							_this10->b->push(HX_("\n",0a,00,00,00));
            						}
            					}
HXLINE(  78)					{
HXLINE(  78)						bool _hx_tmp;
HXDLIN(  78)						if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  78)							_hx_tmp = (value->nodeType != ::Xml_obj::Element);
            						}
            						else {
HXLINE(  78)							_hx_tmp = false;
            						}
HXDLIN(  78)						if (_hx_tmp) {
HXLINE(  78)							HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + value->nodeType));
            						}
HXDLIN(  78)						 ::Dynamic child = value->children->iterator();
HXDLIN(  78)						while(( (bool)(child->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  78)							 ::Xml child1 = ( ( ::Xml)(child->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  79)							::String _hx_tmp1;
HXDLIN(  79)							if (this->pretty) {
HXLINE(  79)								_hx_tmp1 = (tabs + HX_("\t",09,00,00,00));
            							}
            							else {
HXLINE(  79)								_hx_tmp1 = tabs;
            							}
HXDLIN(  79)							this->writeNode(child1,_hx_tmp1);
            						}
            					}
HXLINE(  81)					{
HXLINE(  81)						::String input4 = (tabs + HX_("</",73,34,00,00));
HXDLIN(  81)						{
HXLINE(  81)							 ::StringBuf _this11 = this->output;
HXDLIN(  81)							if (hx::IsNotNull( _this11->charBuf )) {
HXLINE(  81)								_this11->flush();
            							}
HXDLIN(  81)							if (hx::IsNull( _this11->b )) {
HXLINE(  81)								_this11->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input4));
            							}
            							else {
HXLINE(  81)								::Array< ::String > _this12 = _this11->b;
HXDLIN(  81)								_this12->push(::Std_obj::string(input4));
            							}
            						}
            					}
HXLINE(  82)					{
HXLINE(  82)						if ((value->nodeType != ::Xml_obj::Element)) {
HXLINE(  82)							HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + value->nodeType));
            						}
HXDLIN(  82)						::String input5 = value->nodeName;
HXDLIN(  82)						{
HXLINE(  82)							 ::StringBuf _this13 = this->output;
HXDLIN(  82)							if (hx::IsNotNull( _this13->charBuf )) {
HXLINE(  82)								_this13->flush();
            							}
HXDLIN(  82)							if (hx::IsNull( _this13->b )) {
HXLINE(  82)								_this13->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input5));
            							}
            							else {
HXLINE(  82)								::Array< ::String > _this14 = _this13->b;
HXDLIN(  82)								_this14->push(::Std_obj::string(input5));
            							}
            						}
            					}
HXLINE(  83)					{
HXLINE(  83)						 ::StringBuf _this15 = this->output;
HXDLIN(  83)						if (hx::IsNotNull( _this15->charBuf )) {
HXLINE(  83)							_this15->flush();
            						}
HXDLIN(  83)						if (hx::IsNull( _this15->b )) {
HXLINE(  83)							_this15->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_8,1);
            						}
            						else {
HXLINE(  83)							_this15->b->push(HX_(">",3e,00,00,00));
            						}
            					}
HXLINE(  84)					if (this->pretty) {
HXLINE(  84)						 ::StringBuf _this16 = this->output;
HXDLIN(  84)						if (hx::IsNotNull( _this16->charBuf )) {
HXLINE(  84)							_this16->flush();
            						}
HXDLIN(  84)						if (hx::IsNull( _this16->b )) {
HXLINE(  84)							_this16->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_9,1);
            						}
            						else {
HXLINE(  84)							_this16->b->push(HX_("\n",0a,00,00,00));
            						}
            					}
            				}
            				else {
HXLINE(  86)					{
HXLINE(  86)						 ::StringBuf _this17 = this->output;
HXDLIN(  86)						if (hx::IsNotNull( _this17->charBuf )) {
HXLINE(  86)							_this17->flush();
            						}
HXDLIN(  86)						if (hx::IsNull( _this17->b )) {
HXLINE(  86)							_this17->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_10,1);
            						}
            						else {
HXLINE(  86)							_this17->b->push(HX_("/>",2f,29,00,00));
            						}
            					}
HXLINE(  87)					if (this->pretty) {
HXLINE(  87)						 ::StringBuf _this18 = this->output;
HXDLIN(  87)						if (hx::IsNotNull( _this18->charBuf )) {
HXLINE(  87)							_this18->flush();
            						}
HXDLIN(  87)						if (hx::IsNull( _this18->b )) {
HXLINE(  87)							_this18->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_11,1);
            						}
            						else {
HXLINE(  87)							_this18->b->push(HX_("\n",0a,00,00,00));
            						}
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  90)				bool _hx_tmp2;
HXDLIN(  90)				if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  90)					_hx_tmp2 = (value->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE(  90)					_hx_tmp2 = true;
            				}
HXDLIN(  90)				if (_hx_tmp2) {
HXLINE(  90)					HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + value->nodeType));
            				}
HXDLIN(  90)				::String nodeValue = value->nodeValue;
HXLINE(  91)				if ((nodeValue.length != (int)0)) {
HXLINE(  92)					{
HXLINE(  92)						::String input6 = (tabs + ::StringTools_obj::htmlEscape(nodeValue,null()));
HXDLIN(  92)						{
HXLINE(  92)							 ::StringBuf _this19 = this->output;
HXDLIN(  92)							if (hx::IsNotNull( _this19->charBuf )) {
HXLINE(  92)								_this19->flush();
            							}
HXDLIN(  92)							if (hx::IsNull( _this19->b )) {
HXLINE(  92)								_this19->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input6));
            							}
            							else {
HXLINE(  92)								::Array< ::String > _this20 = _this19->b;
HXDLIN(  92)								_this20->push(::Std_obj::string(input6));
            							}
            						}
            					}
HXLINE(  93)					if (this->pretty) {
HXLINE(  93)						 ::StringBuf _this21 = this->output;
HXDLIN(  93)						if (hx::IsNotNull( _this21->charBuf )) {
HXLINE(  93)							_this21->flush();
            						}
HXDLIN(  93)						if (hx::IsNull( _this21->b )) {
HXLINE(  93)							_this21->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_12,1);
            						}
            						else {
HXLINE(  93)							_this21->b->push(HX_("\n",0a,00,00,00));
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  52)				{
HXLINE(  52)					::String input7 = (tabs + HX_("<![CDATA[",a4,fc,95,b4));
HXDLIN(  52)					{
HXLINE(  52)						 ::StringBuf _this22 = this->output;
HXDLIN(  52)						if (hx::IsNotNull( _this22->charBuf )) {
HXLINE(  52)							_this22->flush();
            						}
HXDLIN(  52)						if (hx::IsNull( _this22->b )) {
HXLINE(  52)							_this22->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input7));
            						}
            						else {
HXLINE(  52)							::Array< ::String > _this23 = _this22->b;
HXDLIN(  52)							_this23->push(::Std_obj::string(input7));
            						}
            					}
            				}
HXLINE(  53)				{
HXLINE(  53)					bool input8;
HXDLIN(  53)					if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  53)						input8 = (value->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE(  53)						input8 = true;
            					}
HXDLIN(  53)					if (input8) {
HXLINE(  53)						HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + value->nodeType));
            					}
HXDLIN(  53)					::String input9 = ::StringTools_obj::trim(value->nodeValue);
HXDLIN(  53)					{
HXLINE(  53)						 ::StringBuf _this24 = this->output;
HXDLIN(  53)						if (hx::IsNotNull( _this24->charBuf )) {
HXLINE(  53)							_this24->flush();
            						}
HXDLIN(  53)						if (hx::IsNull( _this24->b )) {
HXLINE(  53)							_this24->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input9));
            						}
            						else {
HXLINE(  53)							::Array< ::String > _this25 = _this24->b;
HXDLIN(  53)							_this25->push(::Std_obj::string(input9));
            						}
            					}
            				}
HXLINE(  54)				{
HXLINE(  54)					 ::StringBuf _this26 = this->output;
HXDLIN(  54)					if (hx::IsNotNull( _this26->charBuf )) {
HXLINE(  54)						_this26->flush();
            					}
HXDLIN(  54)					if (hx::IsNull( _this26->b )) {
HXLINE(  54)						_this26->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_13,1);
            					}
            					else {
HXLINE(  54)						_this26->b->push(HX_("]]>",de,e2,46,00));
            					}
            				}
HXLINE(  55)				if (this->pretty) {
HXLINE(  55)					 ::StringBuf _this27 = this->output;
HXDLIN(  55)					if (hx::IsNotNull( _this27->charBuf )) {
HXLINE(  55)						_this27->flush();
            					}
HXDLIN(  55)					if (hx::IsNull( _this27->b )) {
HXLINE(  55)						_this27->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_14,1);
            					}
            					else {
HXLINE(  55)						_this27->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  57)				bool _hx_tmp3;
HXDLIN(  57)				if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  57)					_hx_tmp3 = (value->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE(  57)					_hx_tmp3 = true;
            				}
HXDLIN(  57)				if (_hx_tmp3) {
HXLINE(  57)					HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + value->nodeType));
            				}
HXDLIN(  57)				::String commentContent = value->nodeValue;
HXLINE(  58)				commentContent =  ::EReg_obj::__alloc( HX_CTX ,HX_("[\n\r\t]+",59,8e,1a,2d),HX_("g",67,00,00,00))->replace(commentContent,HX_("",00,00,00,00));
HXLINE(  59)				commentContent = ((HX_("<!--",05,ff,c1,27) + commentContent) + HX_("-->",de,4c,22,00));
HXLINE(  60)				{
HXLINE(  60)					 ::StringBuf _this28 = this->output;
HXDLIN(  60)					if (hx::IsNotNull( _this28->charBuf )) {
HXLINE(  60)						_this28->flush();
            					}
HXDLIN(  60)					if (hx::IsNull( _this28->b )) {
HXLINE(  60)						_this28->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(tabs));
            					}
            					else {
HXLINE(  60)						::Array< ::String > _this29 = _this28->b;
HXDLIN(  60)						_this29->push(::Std_obj::string(tabs));
            					}
            				}
HXLINE(  61)				{
HXLINE(  61)					::String input10 = ::StringTools_obj::trim(commentContent);
HXDLIN(  61)					{
HXLINE(  61)						 ::StringBuf _this30 = this->output;
HXDLIN(  61)						if (hx::IsNotNull( _this30->charBuf )) {
HXLINE(  61)							_this30->flush();
            						}
HXDLIN(  61)						if (hx::IsNull( _this30->b )) {
HXLINE(  61)							_this30->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input10));
            						}
            						else {
HXLINE(  61)							::Array< ::String > _this31 = _this30->b;
HXDLIN(  61)							_this31->push(::Std_obj::string(input10));
            						}
            					}
            				}
HXLINE(  62)				if (this->pretty) {
HXLINE(  62)					 ::StringBuf _this32 = this->output;
HXDLIN(  62)					if (hx::IsNotNull( _this32->charBuf )) {
HXLINE(  62)						_this32->flush();
            					}
HXDLIN(  62)					if (hx::IsNull( _this32->b )) {
HXLINE(  62)						_this32->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_15,1);
            					}
            					else {
HXLINE(  62)						_this32->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  99)				{
HXLINE(  99)					bool input11;
HXDLIN(  99)					if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  99)						input11 = (value->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE(  99)						input11 = true;
            					}
HXDLIN(  99)					if (input11) {
HXLINE(  99)						HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + value->nodeType));
            					}
HXDLIN(  99)					::String input12 = ((HX_("<!DOCTYPE ",33,6c,bb,ab) + value->nodeValue) + HX_(">",3e,00,00,00));
HXDLIN(  99)					{
HXLINE(  99)						 ::StringBuf _this33 = this->output;
HXDLIN(  99)						if (hx::IsNotNull( _this33->charBuf )) {
HXLINE(  99)							_this33->flush();
            						}
HXDLIN(  99)						if (hx::IsNull( _this33->b )) {
HXLINE(  99)							_this33->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input12));
            						}
            						else {
HXLINE(  99)							::Array< ::String > _this34 = _this33->b;
HXDLIN(  99)							_this34->push(::Std_obj::string(input12));
            						}
            					}
            				}
HXLINE( 100)				if (this->pretty) {
HXLINE( 100)					 ::StringBuf _this35 = this->output;
HXDLIN( 100)					if (hx::IsNotNull( _this35->charBuf )) {
HXLINE( 100)						_this35->flush();
            					}
HXDLIN( 100)					if (hx::IsNull( _this35->b )) {
HXLINE( 100)						_this35->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_16,1);
            					}
            					else {
HXLINE( 100)						_this35->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  96)				{
HXLINE(  96)					bool input13;
HXDLIN(  96)					if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  96)						input13 = (value->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE(  96)						input13 = true;
            					}
HXDLIN(  96)					if (input13) {
HXLINE(  96)						HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + value->nodeType));
            					}
HXDLIN(  96)					::String input14 = ((HX_("<?",83,34,00,00) + value->nodeValue) + HX_("?>",1f,37,00,00));
HXDLIN(  96)					{
HXLINE(  96)						 ::StringBuf _this36 = this->output;
HXDLIN(  96)						if (hx::IsNotNull( _this36->charBuf )) {
HXLINE(  96)							_this36->flush();
            						}
HXDLIN(  96)						if (hx::IsNull( _this36->b )) {
HXLINE(  96)							_this36->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(input14));
            						}
            						else {
HXLINE(  96)							::Array< ::String > _this37 = _this36->b;
HXDLIN(  96)							_this37->push(::Std_obj::string(input14));
            						}
            					}
            				}
HXLINE(  97)				if (this->pretty) {
HXLINE(  97)					 ::StringBuf _this38 = this->output;
HXDLIN(  97)					if (hx::IsNotNull( _this38->charBuf )) {
HXLINE(  97)						_this38->flush();
            					}
HXDLIN(  97)					if (hx::IsNull( _this38->b )) {
HXLINE(  97)						_this38->b = ::Array_obj< ::String >::fromData( _hx_array_data_d3e3a3db_17,1);
            					}
            					else {
HXLINE(  97)						_this38->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE(  64)				bool _hx_tmp4;
HXDLIN(  64)				if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE(  64)					_hx_tmp4 = (value->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  64)					_hx_tmp4 = false;
            				}
HXDLIN(  64)				if (_hx_tmp4) {
HXLINE(  64)					HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + value->nodeType));
            				}
HXDLIN(  64)				 ::Dynamic child2 = value->children->iterator();
HXDLIN(  64)				while(( (bool)(child2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  64)					 ::Xml child3 = ( ( ::Xml)(child2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  65)					this->writeNode(child3,tabs);
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,writeNode,(void))

bool Printer_obj::hasChildren( ::Xml value){
            	HX_STACKFRAME(&_hx_pos_c35276c6c34c9d18_114_hasChildren)
HXLINE( 115)		{
HXLINE( 115)			bool _hx_tmp;
HXDLIN( 115)			if ((value->nodeType != ::Xml_obj::Document)) {
HXLINE( 115)				_hx_tmp = (value->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE( 115)				_hx_tmp = false;
            			}
HXDLIN( 115)			if (_hx_tmp) {
HXLINE( 115)				HX_STACK_DO_THROW((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + value->nodeType));
            			}
HXDLIN( 115)			 ::Dynamic child = value->children->iterator();
HXDLIN( 115)			while(( (bool)(child->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 115)				 ::Xml child1 = ( ( ::Xml)(child->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 116)				{
HXLINE( 116)					int _g = child1->nodeType;
HXDLIN( 116)					switch((int)(_g)){
            						case (int)0: case (int)1: {
HXLINE( 118)							return true;
            						}
            						break;
            						case (int)2: case (int)3: {
HXLINE( 120)							bool _hx_tmp1;
HXDLIN( 120)							if ((child1->nodeType != ::Xml_obj::Document)) {
HXLINE( 120)								_hx_tmp1 = (child1->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE( 120)								_hx_tmp1 = true;
            							}
HXDLIN( 120)							if (_hx_tmp1) {
HXLINE( 120)								HX_STACK_DO_THROW((HX_("Bad node type, unexpected ",be,79,d5,11) + child1->nodeType));
            							}
HXDLIN( 120)							if ((::StringTools_obj::ltrim(child1->nodeValue).length != (int)0)) {
HXLINE( 121)								return true;
            							}
            						}
            						break;
            						default:{
            						}
            					}
            				}
            			}
            		}
HXLINE( 126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Printer_obj,hasChildren,return )

::String Printer_obj::print( ::Xml xml, ::Dynamic __o_pretty){
 ::Dynamic pretty = __o_pretty.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c35276c6c34c9d18_35_print)
HXLINE(  36)		 ::haxe::xml::Printer printer =  ::haxe::xml::Printer_obj::__alloc( HX_CTX ,pretty);
HXLINE(  37)		printer->writeNode(xml,HX_("",00,00,00,00));
HXLINE(  38)		return printer->output->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Printer_obj,print,return )


hx::ObjectPtr< Printer_obj > Printer_obj::__new(bool pretty) {
	hx::ObjectPtr< Printer_obj > __this = new Printer_obj();
	__this->__construct(pretty);
	return __this;
}

hx::ObjectPtr< Printer_obj > Printer_obj::__alloc(hx::Ctx *_hx_ctx,bool pretty) {
	Printer_obj *__this = (Printer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Printer_obj), true, "haxe.xml.Printer"));
	*(void **)__this = Printer_obj::_hx_vtable;
	__this->__construct(pretty);
	return __this;
}

Printer_obj::Printer_obj()
{
}

void Printer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Printer);
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(pretty,"pretty");
	HX_MARK_END_CLASS();
}

void Printer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(pretty,"pretty");
}

hx::Val Printer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return hx::Val( output ); }
		if (HX_FIELD_EQ(inName,"pretty") ) { return hx::Val( pretty ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeNode") ) { return hx::Val( writeNode_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasChildren") ) { return hx::Val( hasChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Printer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
	}
	return false;
}

hx::Val Printer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast<  ::StringBuf >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pretty") ) { pretty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Printer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	outFields->push(HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Printer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(Printer_obj,output),HX_HCSTRING("output","\x01","\x0f","\x81","\x0c")},
	{hx::fsBool,(int)offsetof(Printer_obj,pretty),HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Printer_obj_sStaticStorageInfo = 0;
#endif

static ::String Printer_obj_sMemberFields[] = {
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"),
	HX_HCSTRING("writeNode","\x81","\xfe","\xbd","\x51"),
	HX_HCSTRING("hasChildren","\xb9","\xfe","\x20","\x43"),
	::String(null()) };

static void Printer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Printer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Printer_obj::__mClass,"__mClass");
};

#endif

hx::Class Printer_obj::__mClass;

static ::String Printer_obj_sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	::String(null())
};

void Printer_obj::__register()
{
	hx::Object *dummy = new Printer_obj;
	Printer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Printer","\xdb","\xa3","\xe3","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Printer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Printer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Printer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Printer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Printer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Printer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Printer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Printer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml

// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_xml_XmlParserException
#include <haxe/xml/XmlParserException.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2df1c927bd97a550_120_parse,"haxe.xml.Parser","parse",0x937905c3,"haxe.xml.Parser.parse","/usr/share/haxe/std/haxe/xml/Parser.hx",120,0x2e27fb39)
HX_LOCAL_STACK_FRAME(_hx_pos_2df1c927bd97a550_127_doParse,"haxe.xml.Parser","doParse",0x2e9a6a38,"haxe.xml.Parser.doParse","/usr/share/haxe/std/haxe/xml/Parser.hx",127,0x2e27fb39)
HX_LOCAL_STACK_FRAME(_hx_pos_2df1c927bd97a550_104_boot,"haxe.xml.Parser","boot",0x0af6f0a2,"haxe.xml.Parser.boot","/usr/share/haxe/std/haxe/xml/Parser.hx",104,0x2e27fb39)
namespace haxe{
namespace xml{

void Parser_obj::__construct() { }

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ae70028;
}

 ::haxe::ds::StringMap Parser_obj::escapes;

 ::Xml Parser_obj::parse(::String str,hx::Null< bool >  __o_strict){
bool strict = __o_strict.Default(false);
            	HX_STACKFRAME(&_hx_pos_2df1c927bd97a550_120_parse)
HXLINE( 121)		 ::Xml doc = ::Xml_obj::createDocument();
HXLINE( 122)		::haxe::xml::Parser_obj::doParse(str,strict,(int)0,doc);
HXLINE( 123)		return doc;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,parse,return )

int Parser_obj::doParse(::String str,bool strict,hx::Null< int >  __o_p, ::Xml parent){
int p = __o_p.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_2df1c927bd97a550_127_doParse)
HXLINE( 128)		 ::Xml xml = null();
HXLINE( 129)		int state = (int)1;
HXLINE( 130)		int next = (int)1;
HXLINE( 131)		::String aname = null();
HXLINE( 132)		int start = (int)0;
HXLINE( 133)		int nsubs = (int)0;
HXLINE( 134)		int nbrackets = (int)0;
HXLINE( 135)		int c = str.cca(p);
HXLINE( 136)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 138)		int escapeNext = (int)1;
HXLINE( 139)		int attrValQuote = (int)-1;
HXLINE( 144)		while((c != (int)0)){
HXLINE( 146)			switch((int)(state)){
            				case (int)0: {
HXLINE( 149)					switch((int)(c)){
            						case (int)9: case (int)10: case (int)13: case (int)32: {
            						}
            						break;
            						default:{
HXLINE( 157)							state = next;
HXLINE( 158)							continue;
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 161)					if ((c == (int)60)) {
HXLINE( 164)						state = (int)0;
HXLINE( 165)						next = (int)2;
            					}
            					else {
HXLINE( 167)						start = p;
HXLINE( 168)						state = (int)13;
HXLINE( 169)						continue;
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 195)					switch((int)(c)){
            						case (int)33: {
HXLINE( 198)							::String str1 = str;
HXDLIN( 198)							if ((str1.cca((p + (int)1)) == (int)91)) {
HXLINE( 200)								p = (p + (int)2);
HXLINE( 201)								if ((str.substr(p,(int)6).toUpperCase() != HX_("CDATA[",ce,73,5f,1c))) {
HXLINE( 202)									HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected <![CDATA[",1c,11,1f,2d),str,p));
            								}
HXLINE( 203)								p = (p + (int)5);
HXLINE( 204)								state = (int)17;
HXLINE( 205)								start = (p + (int)1);
            							}
            							else {
HXLINE( 207)								bool _hx_tmp;
HXDLIN( 207)								::String str2 = str;
HXDLIN( 207)								if ((str2.cca((p + (int)1)) != (int)68)) {
HXLINE( 207)									::String str3 = str;
HXDLIN( 207)									_hx_tmp = (str3.cca((p + (int)1)) == (int)100);
            								}
            								else {
HXLINE( 207)									_hx_tmp = true;
            								}
HXDLIN( 207)								if (_hx_tmp) {
HXLINE( 209)									if ((str.substr((p + (int)2),(int)6).toUpperCase() != HX_("OCTYPE",ce,19,d4,61))) {
HXLINE( 210)										HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected <!DOCTYPE",c5,0b,26,b6),str,p));
            									}
HXLINE( 211)									p = (p + (int)8);
HXLINE( 212)									state = (int)16;
HXLINE( 213)									start = (p + (int)1);
            								}
            								else {
HXLINE( 215)									bool _hx_tmp1;
HXDLIN( 215)									::String str4 = str;
HXDLIN( 215)									if ((str4.cca((p + (int)1)) == (int)45)) {
HXLINE( 215)										::String str5 = str;
HXDLIN( 215)										_hx_tmp1 = (str5.cca((p + (int)2)) != (int)45);
            									}
            									else {
HXLINE( 215)										_hx_tmp1 = true;
            									}
HXDLIN( 215)									if (_hx_tmp1) {
HXLINE( 216)										HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected <!--",8d,3d,c1,53),str,p));
            									}
            									else {
HXLINE( 219)										p = (p + (int)2);
HXLINE( 220)										state = (int)15;
HXLINE( 221)										start = (p + (int)1);
            									}
            								}
            							}
            						}
            						break;
            						case (int)47: {
HXLINE( 227)							if (hx::IsNull( parent )) {
HXLINE( 228)								HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected node name",a1,85,63,3f),str,p));
            							}
HXLINE( 229)							start = (p + (int)1);
HXLINE( 230)							state = (int)0;
HXLINE( 231)							next = (int)10;
            						}
            						break;
            						case (int)63: {
HXLINE( 224)							state = (int)14;
HXLINE( 225)							start = p;
            						}
            						break;
            						default:{
HXLINE( 233)							state = (int)3;
HXLINE( 234)							start = p;
HXLINE( 235)							continue;
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 238)					bool _hx_tmp2;
HXDLIN( 238)					bool _hx_tmp3;
HXDLIN( 238)					bool _hx_tmp4;
HXDLIN( 238)					bool _hx_tmp5;
HXDLIN( 238)					bool _hx_tmp6;
HXDLIN( 238)					bool _hx_tmp7;
HXDLIN( 238)					bool _hx_tmp8;
HXDLIN( 238)					if ((c >= (int)97)) {
HXLINE( 238)						_hx_tmp8 = (c <= (int)122);
            					}
            					else {
HXLINE( 238)						_hx_tmp8 = false;
            					}
HXDLIN( 238)					if (!(_hx_tmp8)) {
HXLINE( 238)						if ((c >= (int)65)) {
HXLINE( 238)							_hx_tmp7 = (c <= (int)90);
            						}
            						else {
HXLINE( 238)							_hx_tmp7 = false;
            						}
            					}
            					else {
HXLINE( 238)						_hx_tmp7 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp7)) {
HXLINE( 238)						if ((c >= (int)48)) {
HXLINE( 238)							_hx_tmp6 = (c <= (int)57);
            						}
            						else {
HXLINE( 238)							_hx_tmp6 = false;
            						}
            					}
            					else {
HXLINE( 238)						_hx_tmp6 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp6)) {
HXLINE( 238)						_hx_tmp5 = (c == (int)58);
            					}
            					else {
HXLINE( 238)						_hx_tmp5 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp5)) {
HXLINE( 238)						_hx_tmp4 = (c == (int)46);
            					}
            					else {
HXLINE( 238)						_hx_tmp4 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp4)) {
HXLINE( 238)						_hx_tmp3 = (c == (int)95);
            					}
            					else {
HXLINE( 238)						_hx_tmp3 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp3)) {
HXLINE( 238)						_hx_tmp2 = (c == (int)45);
            					}
            					else {
HXLINE( 238)						_hx_tmp2 = true;
            					}
HXDLIN( 238)					if (!(_hx_tmp2)) {
HXLINE( 240)						if ((p == start)) {
HXLINE( 241)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected node name",a1,85,63,3f),str,p));
            						}
HXLINE( 242)						xml = ::Xml_obj::createElement(str.substr(start,(p - start)));
HXLINE( 243)						{
HXLINE( 243)							parent->addChild(xml);
HXDLIN( 243)							nsubs = (nsubs + (int)1);
            						}
HXLINE( 244)						state = (int)0;
HXLINE( 245)						next = (int)4;
HXLINE( 246)						continue;
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 249)					switch((int)(c)){
            						case (int)47: {
HXLINE( 252)							state = (int)11;
            						}
            						break;
            						case (int)62: {
HXLINE( 254)							state = (int)9;
            						}
            						break;
            						default:{
HXLINE( 256)							state = (int)5;
HXLINE( 257)							start = p;
HXLINE( 258)							continue;
            						}
            					}
            				}
            				break;
            				case (int)5: {
HXLINE( 261)					bool _hx_tmp9;
HXDLIN( 261)					bool _hx_tmp10;
HXDLIN( 261)					bool _hx_tmp11;
HXDLIN( 261)					bool _hx_tmp12;
HXDLIN( 261)					bool _hx_tmp13;
HXDLIN( 261)					bool _hx_tmp14;
HXDLIN( 261)					bool _hx_tmp15;
HXDLIN( 261)					if ((c >= (int)97)) {
HXLINE( 261)						_hx_tmp15 = (c <= (int)122);
            					}
            					else {
HXLINE( 261)						_hx_tmp15 = false;
            					}
HXDLIN( 261)					if (!(_hx_tmp15)) {
HXLINE( 261)						if ((c >= (int)65)) {
HXLINE( 261)							_hx_tmp14 = (c <= (int)90);
            						}
            						else {
HXLINE( 261)							_hx_tmp14 = false;
            						}
            					}
            					else {
HXLINE( 261)						_hx_tmp14 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp14)) {
HXLINE( 261)						if ((c >= (int)48)) {
HXLINE( 261)							_hx_tmp13 = (c <= (int)57);
            						}
            						else {
HXLINE( 261)							_hx_tmp13 = false;
            						}
            					}
            					else {
HXLINE( 261)						_hx_tmp13 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp13)) {
HXLINE( 261)						_hx_tmp12 = (c == (int)58);
            					}
            					else {
HXLINE( 261)						_hx_tmp12 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp12)) {
HXLINE( 261)						_hx_tmp11 = (c == (int)46);
            					}
            					else {
HXLINE( 261)						_hx_tmp11 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp11)) {
HXLINE( 261)						_hx_tmp10 = (c == (int)95);
            					}
            					else {
HXLINE( 261)						_hx_tmp10 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp10)) {
HXLINE( 261)						_hx_tmp9 = (c == (int)45);
            					}
            					else {
HXLINE( 261)						_hx_tmp9 = true;
            					}
HXDLIN( 261)					if (!(_hx_tmp9)) {
HXLINE( 263)						::String tmp;
HXLINE( 264)						if ((start == p)) {
HXLINE( 265)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected attribute name",57,65,2b,54),str,p));
            						}
HXLINE( 266)						tmp = str.substr(start,(p - start));
HXLINE( 267)						aname = tmp;
HXLINE( 268)						if (xml->exists(aname)) {
HXLINE( 269)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,((HX_("Duplicate attribute [",22,75,cb,05) + aname) + HX_("]",5d,00,00,00)),str,p));
            						}
HXLINE( 270)						state = (int)0;
HXLINE( 271)						next = (int)6;
HXLINE( 272)						continue;
            					}
            				}
            				break;
            				case (int)6: {
HXLINE( 275)					if ((c == (int)61)) {
HXLINE( 278)						state = (int)0;
HXLINE( 279)						next = (int)7;
            					}
            					else {
HXLINE( 281)						HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected =",b5,dc,23,c6),str,p));
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 284)					switch((int)(c)){
            						case (int)34: case (int)39: {
HXLINE( 287)							buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 288)							state = (int)8;
HXLINE( 289)							start = (p + (int)1);
HXLINE( 290)							attrValQuote = c;
            						}
            						break;
            						default:{
HXLINE( 292)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected \"",9a,dc,23,c6),str,p));
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE( 295)					switch((int)(c)){
            						case (int)38: {
HXLINE( 297)							{
HXLINE( 297)								 ::Dynamic len = (p - start);
HXDLIN( 297)								if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 297)									buf->flush();
            								}
HXDLIN( 297)								if (hx::IsNull( buf->b )) {
HXLINE( 297)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len));
            								}
            								else {
HXLINE( 297)									::Array< ::String > buf1 = buf->b;
HXDLIN( 297)									buf1->push(str.substr(start,len));
            								}
            							}
HXLINE( 298)							state = (int)18;
HXLINE( 299)							escapeNext = (int)8;
HXLINE( 300)							start = (p + (int)1);
            						}
            						break;
            						case (int)60: case (int)62: {
HXLINE( 301)							if (strict) {
HXLINE( 303)								HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,((HX_("Invalid unescaped ",ff,da,cb,cc) + ::String::fromCharCode(c)) + HX_(" in attribute value",52,5a,ca,13)),str,p));
            							}
            							else {
HXLINE( 304)								if ((c == attrValQuote)) {
HXLINE( 305)									{
HXLINE( 305)										 ::Dynamic len1 = (p - start);
HXDLIN( 305)										if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 305)											buf->flush();
            										}
HXDLIN( 305)										if (hx::IsNull( buf->b )) {
HXLINE( 305)											buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len1));
            										}
            										else {
HXLINE( 305)											::Array< ::String > buf2 = buf->b;
HXDLIN( 305)											buf2->push(str.substr(start,len1));
            										}
            									}
HXLINE( 306)									::String val = buf->toString();
HXLINE( 307)									buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 308)									xml->set(aname,val);
HXLINE( 309)									state = (int)0;
HXLINE( 310)									next = (int)4;
            								}
            							}
            						}
            						break;
            						default:{
HXLINE( 304)							if ((c == attrValQuote)) {
HXLINE( 305)								{
HXLINE( 305)									 ::Dynamic len2 = (p - start);
HXDLIN( 305)									if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 305)										buf->flush();
            									}
HXDLIN( 305)									if (hx::IsNull( buf->b )) {
HXLINE( 305)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len2));
            									}
            									else {
HXLINE( 305)										::Array< ::String > buf3 = buf->b;
HXDLIN( 305)										buf3->push(str.substr(start,len2));
            									}
            								}
HXLINE( 306)								::String val1 = buf->toString();
HXLINE( 307)								buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 308)								xml->set(aname,val1);
HXLINE( 309)								state = (int)0;
HXLINE( 310)								next = (int)4;
            							}
            						}
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 313)					p = ::haxe::xml::Parser_obj::doParse(str,strict,p,xml);
HXLINE( 314)					start = p;
HXLINE( 315)					state = (int)1;
            				}
            				break;
            				case (int)10: {
HXLINE( 335)					bool _hx_tmp16;
HXDLIN( 335)					bool _hx_tmp17;
HXDLIN( 335)					bool _hx_tmp18;
HXDLIN( 335)					bool _hx_tmp19;
HXDLIN( 335)					bool _hx_tmp20;
HXDLIN( 335)					bool _hx_tmp21;
HXDLIN( 335)					bool _hx_tmp22;
HXDLIN( 335)					if ((c >= (int)97)) {
HXLINE( 335)						_hx_tmp22 = (c <= (int)122);
            					}
            					else {
HXLINE( 335)						_hx_tmp22 = false;
            					}
HXDLIN( 335)					if (!(_hx_tmp22)) {
HXLINE( 335)						if ((c >= (int)65)) {
HXLINE( 335)							_hx_tmp21 = (c <= (int)90);
            						}
            						else {
HXLINE( 335)							_hx_tmp21 = false;
            						}
            					}
            					else {
HXLINE( 335)						_hx_tmp21 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp21)) {
HXLINE( 335)						if ((c >= (int)48)) {
HXLINE( 335)							_hx_tmp20 = (c <= (int)57);
            						}
            						else {
HXLINE( 335)							_hx_tmp20 = false;
            						}
            					}
            					else {
HXLINE( 335)						_hx_tmp20 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp20)) {
HXLINE( 335)						_hx_tmp19 = (c == (int)58);
            					}
            					else {
HXLINE( 335)						_hx_tmp19 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp19)) {
HXLINE( 335)						_hx_tmp18 = (c == (int)46);
            					}
            					else {
HXLINE( 335)						_hx_tmp18 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp18)) {
HXLINE( 335)						_hx_tmp17 = (c == (int)95);
            					}
            					else {
HXLINE( 335)						_hx_tmp17 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp17)) {
HXLINE( 335)						_hx_tmp16 = (c == (int)45);
            					}
            					else {
HXLINE( 335)						_hx_tmp16 = true;
            					}
HXDLIN( 335)					if (!(_hx_tmp16)) {
HXLINE( 337)						if ((start == p)) {
HXLINE( 338)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected node name",a1,85,63,3f),str,p));
            						}
HXLINE( 340)						::String v = str.substr(start,(p - start));
HXLINE( 341)						if ((parent->nodeType != ::Xml_obj::Element)) {
HXLINE( 341)							HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + parent->nodeType));
            						}
HXDLIN( 341)						if ((v != parent->nodeName)) {
HXLINE( 342)							if ((parent->nodeType != ::Xml_obj::Element)) {
HXLINE( 342)								HX_STACK_DO_THROW((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + parent->nodeType));
            							}
HXDLIN( 342)							HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,((HX_("Expected </",fb,40,3d,99) + parent->nodeName) + HX_(">",3e,00,00,00)),str,p));
            						}
HXLINE( 344)						state = (int)0;
HXLINE( 345)						next = (int)12;
HXLINE( 346)						continue;
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 317)					if ((c == (int)62)) {
HXLINE( 320)						state = (int)1;
            					}
            					else {
HXLINE( 322)						HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected >",b6,dc,23,c6),str,p));
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 325)					if ((c == (int)62)) {
HXLINE( 328)						if ((nsubs == (int)0)) {
HXLINE( 329)							parent->addChild(::Xml_obj::createPCData(HX_("",00,00,00,00)));
            						}
HXLINE( 330)						return p;
            					}
            					else {
HXLINE( 332)						HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Expected >",b6,dc,23,c6),str,p));
            					}
            				}
            				break;
            				case (int)13: {
HXLINE( 172)					if ((c == (int)60)) {
HXLINE( 174)						{
HXLINE( 174)							 ::Dynamic len3 = (p - start);
HXDLIN( 174)							if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 174)								buf->flush();
            							}
HXDLIN( 174)							if (hx::IsNull( buf->b )) {
HXLINE( 174)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len3));
            							}
            							else {
HXLINE( 174)								::Array< ::String > buf4 = buf->b;
HXDLIN( 174)								buf4->push(str.substr(start,len3));
            							}
            						}
HXLINE( 175)						 ::Xml child = ::Xml_obj::createPCData(buf->toString());
HXLINE( 176)						buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 177)						{
HXLINE( 177)							parent->addChild(child);
HXDLIN( 177)							nsubs = (nsubs + (int)1);
            						}
HXLINE( 178)						state = (int)0;
HXLINE( 179)						next = (int)2;
            					}
            					else {
HXLINE( 180)						if ((c == (int)38)) {
HXLINE( 181)							{
HXLINE( 181)								 ::Dynamic len4 = (p - start);
HXDLIN( 181)								if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 181)									buf->flush();
            								}
HXDLIN( 181)								if (hx::IsNull( buf->b )) {
HXLINE( 181)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len4));
            								}
            								else {
HXLINE( 181)									::Array< ::String > buf5 = buf->b;
HXDLIN( 181)									buf5->push(str.substr(start,len4));
            								}
            							}
HXLINE( 182)							state = (int)18;
HXLINE( 183)							escapeNext = (int)13;
HXLINE( 184)							start = (p + (int)1);
            						}
            					}
            				}
            				break;
            				case (int)14: {
HXLINE( 366)					bool _hx_tmp23;
HXDLIN( 366)					if ((c == (int)63)) {
HXLINE( 366)						::String str6 = str;
HXDLIN( 366)						_hx_tmp23 = (str6.cca((p + (int)1)) == (int)62);
            					}
            					else {
HXLINE( 366)						_hx_tmp23 = false;
            					}
HXDLIN( 366)					if (_hx_tmp23) {
HXLINE( 368)						p = (p + (int)1);
HXLINE( 369)						::String str7 = str.substr((start + (int)1),((p - start) - (int)2));
HXLINE( 370)						{
HXLINE( 370)							parent->addChild(::Xml_obj::createProcessingInstruction(str7));
HXDLIN( 370)							nsubs = (nsubs + (int)1);
            						}
HXLINE( 371)						state = (int)1;
            					}
            				}
            				break;
            				case (int)15: {
HXLINE( 349)					bool _hx_tmp24;
HXDLIN( 349)					bool _hx_tmp25;
HXDLIN( 349)					if ((c == (int)45)) {
HXLINE( 349)						::String str8 = str;
HXDLIN( 349)						_hx_tmp25 = (str8.cca((p + (int)1)) == (int)45);
            					}
            					else {
HXLINE( 349)						_hx_tmp25 = false;
            					}
HXDLIN( 349)					if (_hx_tmp25) {
HXLINE( 349)						::String str9 = str;
HXDLIN( 349)						_hx_tmp24 = (str9.cca((p + (int)2)) == (int)62);
            					}
            					else {
HXLINE( 349)						_hx_tmp24 = false;
            					}
HXDLIN( 349)					if (_hx_tmp24) {
HXLINE( 351)						{
HXLINE( 351)							parent->addChild(::Xml_obj::createComment(str.substr(start,(p - start))));
HXDLIN( 351)							nsubs = (nsubs + (int)1);
            						}
HXLINE( 352)						p = (p + (int)2);
HXLINE( 353)						state = (int)1;
            					}
            				}
            				break;
            				case (int)16: {
HXLINE( 356)					if ((c == (int)91)) {
HXLINE( 357)						nbrackets = (nbrackets + (int)1);
            					}
            					else {
HXLINE( 358)						if ((c == (int)93)) {
HXLINE( 359)							nbrackets = (nbrackets - (int)1);
            						}
            						else {
HXLINE( 360)							bool _hx_tmp26;
HXDLIN( 360)							if ((c == (int)62)) {
HXLINE( 360)								_hx_tmp26 = (nbrackets == (int)0);
            							}
            							else {
HXLINE( 360)								_hx_tmp26 = false;
            							}
HXDLIN( 360)							if (_hx_tmp26) {
HXLINE( 362)								{
HXLINE( 362)									parent->addChild(::Xml_obj::createDocType(str.substr(start,(p - start))));
HXDLIN( 362)									nsubs = (nsubs + (int)1);
            								}
HXLINE( 363)								state = (int)1;
            							}
            						}
            					}
            				}
            				break;
            				case (int)17: {
HXLINE( 187)					bool _hx_tmp27;
HXDLIN( 187)					bool _hx_tmp28;
HXDLIN( 187)					if ((c == (int)93)) {
HXLINE( 187)						::String str10 = str;
HXDLIN( 187)						_hx_tmp28 = (str10.cca((p + (int)1)) == (int)93);
            					}
            					else {
HXLINE( 187)						_hx_tmp28 = false;
            					}
HXDLIN( 187)					if (_hx_tmp28) {
HXLINE( 187)						::String str11 = str;
HXDLIN( 187)						_hx_tmp27 = (str11.cca((p + (int)2)) == (int)62);
            					}
            					else {
HXLINE( 187)						_hx_tmp27 = false;
            					}
HXDLIN( 187)					if (_hx_tmp27) {
HXLINE( 189)						 ::Xml child1 = ::Xml_obj::createCData(str.substr(start,(p - start)));
HXLINE( 190)						{
HXLINE( 190)							parent->addChild(child1);
HXDLIN( 190)							nsubs = (nsubs + (int)1);
            						}
HXLINE( 191)						p = (p + (int)2);
HXLINE( 192)						state = (int)1;
            					}
            				}
            				break;
            				case (int)18: {
HXLINE( 374)					if ((c == (int)59)) {
HXLINE( 376)						::String s = str.substr(start,(p - start));
HXLINE( 377)						if ((s.cca((int)0) == (int)35)) {
HXLINE( 378)							 ::Dynamic c1;
HXDLIN( 378)							if ((s.cca((int)1) == (int)120)) {
HXLINE( 378)								c1 = ::Std_obj::parseInt((HX_("0",30,00,00,00) + s.substr((int)1,(s.length - (int)1))));
            							}
            							else {
HXLINE( 378)								c1 = ::Std_obj::parseInt(s.substr((int)1,(s.length - (int)1)));
            							}
HXLINE( 382)							if (hx::IsGreaterEq( c1,(int)128 )) {
HXLINE( 384)								if (hx::IsLessEq( c1,(int)2047 )) {
HXLINE( 385)									{
HXLINE( 385)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 385)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 385)										::Array< char > buf6 = buf->charBuf;
HXDLIN( 385)										buf6->push(((int)(int)192 | (int)((int)c1 >> (int)(int)6)));
            									}
HXLINE( 386)									{
HXLINE( 386)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 386)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 386)										::Array< char > buf7 = buf->charBuf;
HXDLIN( 386)										buf7->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            									}
            								}
            								else {
HXLINE( 387)									if (hx::IsLessEq( c1,(int)65535 )) {
HXLINE( 388)										{
HXLINE( 388)											if (hx::IsNull( buf->charBuf )) {
HXLINE( 388)												buf->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 388)											::Array< char > buf8 = buf->charBuf;
HXDLIN( 388)											buf8->push(((int)(int)224 | (int)((int)c1 >> (int)(int)12)));
            										}
HXLINE( 389)										{
HXLINE( 389)											if (hx::IsNull( buf->charBuf )) {
HXLINE( 389)												buf->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 389)											::Array< char > buf9 = buf->charBuf;
HXDLIN( 389)											buf9->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
            										}
HXLINE( 390)										{
HXLINE( 390)											if (hx::IsNull( buf->charBuf )) {
HXLINE( 390)												buf->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 390)											::Array< char > buf10 = buf->charBuf;
HXDLIN( 390)											buf10->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            										}
            									}
            									else {
HXLINE( 391)										if (hx::IsLessEq( c1,(int)1114111 )) {
HXLINE( 392)											{
HXLINE( 392)												if (hx::IsNull( buf->charBuf )) {
HXLINE( 392)													buf->charBuf = ::Array_obj< char >::__new();
            												}
HXDLIN( 392)												::Array< char > buf11 = buf->charBuf;
HXDLIN( 392)												buf11->push(((int)(int)240 | (int)((int)c1 >> (int)(int)18)));
            											}
HXLINE( 393)											{
HXLINE( 393)												if (hx::IsNull( buf->charBuf )) {
HXLINE( 393)													buf->charBuf = ::Array_obj< char >::__new();
            												}
HXDLIN( 393)												::Array< char > buf12 = buf->charBuf;
HXDLIN( 393)												buf12->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)12) & (int)(int)63)));
            											}
HXLINE( 394)											{
HXLINE( 394)												if (hx::IsNull( buf->charBuf )) {
HXLINE( 394)													buf->charBuf = ::Array_obj< char >::__new();
            												}
HXDLIN( 394)												::Array< char > buf13 = buf->charBuf;
HXDLIN( 394)												buf13->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
            											}
HXLINE( 395)											{
HXLINE( 395)												if (hx::IsNull( buf->charBuf )) {
HXLINE( 395)													buf->charBuf = ::Array_obj< char >::__new();
            												}
HXDLIN( 395)												::Array< char > buf14 = buf->charBuf;
HXDLIN( 395)												buf14->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            											}
            										}
            										else {
HXLINE( 397)											HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,(HX_("Cannot encode UTF8-char ",db,8e,93,f7) + c1),str,p));
            										}
            									}
            								}
            							}
            							else {
HXLINE( 400)								if (hx::IsNull( buf->charBuf )) {
HXLINE( 400)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 400)								buf->charBuf->push(c1);
            							}
            						}
            						else {
HXLINE( 401)							if (!(::haxe::xml::Parser_obj::escapes->exists(s))) {
HXLINE( 402)								if (strict) {
HXLINE( 403)									HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,(HX_("Undefined entity: ",39,48,f2,48) + s),str,p));
            								}
HXLINE( 404)								{
HXLINE( 404)									::String x = ((HX_("&",26,00,00,00) + s) + HX_(";",3b,00,00,00));
HXDLIN( 404)									if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 404)										buf->flush();
            									}
HXDLIN( 404)									if (hx::IsNull( buf->b )) {
HXLINE( 404)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 404)										::Array< ::String > buf15 = buf->b;
HXDLIN( 404)										buf15->push(::Std_obj::string(x));
            									}
            								}
            							}
            							else {
HXLINE( 406)								::String x1 = ( (::String)(::haxe::xml::Parser_obj::escapes->get(s)) );
HXDLIN( 406)								if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 406)									buf->flush();
            								}
HXDLIN( 406)								if (hx::IsNull( buf->b )) {
HXLINE( 406)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            								}
            								else {
HXLINE( 406)									::Array< ::String > buf16 = buf->b;
HXDLIN( 406)									buf16->push(::Std_obj::string(x1));
            								}
            							}
            						}
HXLINE( 408)						start = (p + (int)1);
HXLINE( 409)						state = escapeNext;
            					}
            					else {
HXLINE( 410)						bool _hx_tmp29;
HXDLIN( 410)						bool _hx_tmp30;
HXDLIN( 410)						bool _hx_tmp31;
HXDLIN( 410)						bool _hx_tmp32;
HXDLIN( 410)						bool _hx_tmp33;
HXDLIN( 410)						bool _hx_tmp34;
HXDLIN( 410)						bool _hx_tmp35;
HXDLIN( 410)						bool _hx_tmp36;
HXDLIN( 410)						if ((c >= (int)97)) {
HXLINE( 410)							_hx_tmp36 = (c <= (int)122);
            						}
            						else {
HXLINE( 410)							_hx_tmp36 = false;
            						}
HXDLIN( 410)						if (!(_hx_tmp36)) {
HXLINE( 410)							if ((c >= (int)65)) {
HXLINE( 410)								_hx_tmp35 = (c <= (int)90);
            							}
            							else {
HXLINE( 410)								_hx_tmp35 = false;
            							}
            						}
            						else {
HXLINE( 410)							_hx_tmp35 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp35)) {
HXLINE( 410)							if ((c >= (int)48)) {
HXLINE( 410)								_hx_tmp34 = (c <= (int)57);
            							}
            							else {
HXLINE( 410)								_hx_tmp34 = false;
            							}
            						}
            						else {
HXLINE( 410)							_hx_tmp34 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp34)) {
HXLINE( 410)							_hx_tmp33 = (c == (int)58);
            						}
            						else {
HXLINE( 410)							_hx_tmp33 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp33)) {
HXLINE( 410)							_hx_tmp32 = (c == (int)46);
            						}
            						else {
HXLINE( 410)							_hx_tmp32 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp32)) {
HXLINE( 410)							_hx_tmp31 = (c == (int)95);
            						}
            						else {
HXLINE( 410)							_hx_tmp31 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp31)) {
HXLINE( 410)							_hx_tmp30 = (c == (int)45);
            						}
            						else {
HXLINE( 410)							_hx_tmp30 = true;
            						}
HXDLIN( 410)						if (!(_hx_tmp30)) {
HXLINE( 410)							_hx_tmp29 = (c != (int)35);
            						}
            						else {
HXLINE( 410)							_hx_tmp29 = false;
            						}
HXDLIN( 410)						if (_hx_tmp29) {
HXLINE( 411)							if (strict) {
HXLINE( 412)								HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,(HX_("Invalid character in entity: ",24,85,11,30) + ::String::fromCharCode(c)),str,p));
            							}
HXLINE( 413)							{
HXLINE( 413)								if (hx::IsNull( buf->charBuf )) {
HXLINE( 413)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 413)								buf->charBuf->push((int)38);
            							}
HXLINE( 414)							{
HXLINE( 414)								 ::Dynamic len5 = (p - start);
HXDLIN( 414)								if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 414)									buf->flush();
            								}
HXDLIN( 414)								if (hx::IsNull( buf->b )) {
HXLINE( 414)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len5));
            								}
            								else {
HXLINE( 414)									::Array< ::String > buf17 = buf->b;
HXDLIN( 414)									buf17->push(str.substr(start,len5));
            								}
            							}
HXLINE( 415)							p = (p - (int)1);
HXLINE( 416)							start = (p + (int)1);
HXLINE( 417)							state = escapeNext;
            						}
            					}
            				}
            				break;
            			}
HXLINE( 420)			p = (p + (int)1);
HXDLIN( 420)			c = str.cca(p);
            		}
HXLINE( 423)		if ((state == (int)1)) {
HXLINE( 425)			start = p;
HXLINE( 426)			state = (int)13;
            		}
HXLINE( 429)		if ((state == (int)13)) {
HXLINE( 431)			bool _hx_tmp37;
HXDLIN( 431)			if ((p == start)) {
HXLINE( 431)				_hx_tmp37 = (nsubs == (int)0);
            			}
            			else {
HXLINE( 431)				_hx_tmp37 = true;
            			}
HXDLIN( 431)			if (_hx_tmp37) {
HXLINE( 432)				{
HXLINE( 432)					 ::Dynamic len6 = (p - start);
HXDLIN( 432)					if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 432)						buf->flush();
            					}
HXDLIN( 432)					if (hx::IsNull( buf->b )) {
HXLINE( 432)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len6));
            					}
            					else {
HXLINE( 432)						::Array< ::String > buf18 = buf->b;
HXDLIN( 432)						buf18->push(str.substr(start,len6));
            					}
            				}
HXLINE( 433)				{
HXLINE( 433)					parent->addChild(::Xml_obj::createPCData(buf->toString()));
HXDLIN( 433)					nsubs = (nsubs + (int)1);
            				}
            			}
HXLINE( 435)			return p;
            		}
HXLINE( 438)		bool _hx_tmp38;
HXDLIN( 438)		bool _hx_tmp39;
HXDLIN( 438)		if (!(strict)) {
HXLINE( 438)			_hx_tmp39 = (state == (int)18);
            		}
            		else {
HXLINE( 438)			_hx_tmp39 = false;
            		}
HXDLIN( 438)		if (_hx_tmp39) {
HXLINE( 438)			_hx_tmp38 = (escapeNext == (int)13);
            		}
            		else {
HXLINE( 438)			_hx_tmp38 = false;
            		}
HXDLIN( 438)		if (_hx_tmp38) {
HXLINE( 439)			{
HXLINE( 439)				if (hx::IsNull( buf->charBuf )) {
HXLINE( 439)					buf->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 439)				buf->charBuf->push((int)38);
            			}
HXLINE( 440)			{
HXLINE( 440)				 ::Dynamic len7 = (p - start);
HXDLIN( 440)				if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 440)					buf->flush();
            				}
HXDLIN( 440)				if (hx::IsNull( buf->b )) {
HXLINE( 440)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,str.substr(start,len7));
            				}
            				else {
HXLINE( 440)					::Array< ::String > buf19 = buf->b;
HXDLIN( 440)					buf19->push(str.substr(start,len7));
            				}
            			}
HXLINE( 441)			{
HXLINE( 441)				parent->addChild(::Xml_obj::createPCData(buf->toString()));
HXDLIN( 441)				nsubs = (nsubs + (int)1);
            			}
HXLINE( 442)			return p;
            		}
HXLINE( 445)		HX_STACK_DO_THROW( ::haxe::xml::XmlParserException_obj::__alloc( HX_CTX ,HX_("Unexpected end",2c,3e,ab,50),str,p));
HXDLIN( 445)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Parser_obj,doParse,return )


Parser_obj::Parser_obj()
{
}

bool Parser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { outValue = ( escapes ); return true; }
		if (HX_FIELD_EQ(inName,"doParse") ) { outValue = doParse_dyn(); return true; }
	}
	return false;
}

bool Parser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"escapes") ) { escapes=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Parser_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Parser_obj::escapes,HX_HCSTRING("escapes","\xd2","\xcd","\x20","\xa4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::escapes,"escapes");
};

#endif

hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_HCSTRING("escapes","\xd2","\xcd","\x20","\xa4"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("doParse","\xa8","\x70","\x82","\xf0"),
	::String(null())
};

void Parser_obj::__register()
{
	hx::Object *dummy = new Parser_obj;
	Parser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Parser","\xfe","\x49","\x90","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Parser_obj::__GetStatic;
	__mClass->mSetStaticField = &Parser_obj::__SetStatic;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2df1c927bd97a550_104_boot)
HXLINE( 105)			 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 106)			h->set(HX_("lt",88,5e,00,00),HX_("<",3c,00,00,00));
HXLINE( 107)			h->set(HX_("gt",2d,5a,00,00),HX_(">",3e,00,00,00));
HXLINE( 108)			h->set(HX_("amp",04,fa,49,00),HX_("&",26,00,00,00));
HXLINE( 109)			h->set(HX_("quot",09,45,0a,4b),HX_("\"",22,00,00,00));
HXLINE( 110)			h->set(HX_("apos",d3,0f,73,40),HX_("'",27,00,00,00));
HXLINE( 111)			return h;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_2df1c927bd97a550_104_boot)
HXDLIN( 104)		escapes =  ::Dynamic(new _hx_Closure_0())();
            	}
}

} // end namespace haxe
} // end namespace xml

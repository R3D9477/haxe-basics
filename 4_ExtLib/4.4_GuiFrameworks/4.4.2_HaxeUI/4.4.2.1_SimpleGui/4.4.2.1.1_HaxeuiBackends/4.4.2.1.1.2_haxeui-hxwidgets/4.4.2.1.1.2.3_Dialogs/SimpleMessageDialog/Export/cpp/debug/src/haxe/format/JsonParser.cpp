// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5fe9f5f36ee8c2f_51_new,"haxe.format.JsonParser","new",0xa017eec8,"haxe.format.JsonParser.new","/usr/share/haxe/std/haxe/format/JsonParser.hx",51,0x7dd2ac6d)
HX_LOCAL_STACK_FRAME(_hx_pos_c5fe9f5f36ee8c2f_57_parseRec,"haxe.format.JsonParser","parseRec",0xda258b75,"haxe.format.JsonParser.parseRec","/usr/share/haxe/std/haxe/format/JsonParser.hx",57,0x7dd2ac6d)
HX_LOCAL_STACK_FRAME(_hx_pos_c5fe9f5f36ee8c2f_138_parseString,"haxe.format.JsonParser","parseString",0x8c919bcc,"haxe.format.JsonParser.parseString","/usr/share/haxe/std/haxe/format/JsonParser.hx",138,0x7dd2ac6d)
HX_LOCAL_STACK_FRAME(_hx_pos_c5fe9f5f36ee8c2f_249_invalidChar,"haxe.format.JsonParser","invalidChar",0xa9f373d5,"haxe.format.JsonParser.invalidChar","/usr/share/haxe/std/haxe/format/JsonParser.hx",249,0x7dd2ac6d)
HX_LOCAL_STACK_FRAME(_hx_pos_c5fe9f5f36ee8c2f_255_invalidNumber,"haxe.format.JsonParser","invalidNumber",0x8e9d1988,"haxe.format.JsonParser.invalidNumber","/usr/share/haxe/std/haxe/format/JsonParser.hx",255,0x7dd2ac6d)
namespace haxe{
namespace format{

void JsonParser_obj::__construct(::String str){
            	HX_STACKFRAME(&_hx_pos_c5fe9f5f36ee8c2f_51_new)
HXLINE(  52)		this->str = str;
HXLINE(  53)		this->pos = (int)0;
            	}

Dynamic JsonParser_obj::__CreateEmpty() { return new JsonParser_obj; }

void *JsonParser_obj::_hx_vtable = 0;

Dynamic JsonParser_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JsonParser_obj > _hx_result = new JsonParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JsonParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5b04dba4;
}

 ::Dynamic JsonParser_obj::parseRec(){
            	HX_STACKFRAME(&_hx_pos_c5fe9f5f36ee8c2f_57_parseRec)
HXDLIN(  57)		while(true){
HXLINE(  58)			int c = this->str.cca(this->pos++);
HXLINE(  59)			switch((int)(c)){
            				case (int)9: case (int)10: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)34: {
HXLINE( 129)					return this->parseString();
            				}
            				break;
            				case (int)45: case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 131)					int c1 = c;
HXDLIN( 131)					int start = (this->pos - (int)1);
HXDLIN( 131)					bool minus = (c1 == (int)45);
HXDLIN( 131)					bool digit = !(minus);
HXDLIN( 131)					bool zero = (c1 == (int)48);
HXDLIN( 131)					bool point = false;
HXDLIN( 131)					bool e = false;
HXDLIN( 131)					bool pm = false;
HXDLIN( 131)					bool end = false;
HXDLIN( 131)					while(true){
HXLINE( 131)						c1 = this->str.cca(this->pos++);
HXDLIN( 131)						switch((int)(c1)){
            							case (int)43: case (int)45: {
HXLINE( 131)								bool _hx_tmp;
HXDLIN( 131)								if (!(!(e))) {
HXLINE( 131)									_hx_tmp = pm;
            								}
            								else {
HXLINE( 131)									_hx_tmp = true;
            								}
HXDLIN( 131)								if (_hx_tmp) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								pm = true;
            							}
            							break;
            							case (int)46: {
HXLINE( 131)								bool _hx_tmp1;
HXDLIN( 131)								if (!(minus)) {
HXLINE( 131)									_hx_tmp1 = point;
            								}
            								else {
HXLINE( 131)									_hx_tmp1 = true;
            								}
HXDLIN( 131)								if (_hx_tmp1) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								point = true;
            							}
            							break;
            							case (int)48: {
HXLINE( 131)								bool _hx_tmp2;
HXDLIN( 131)								if (zero) {
HXLINE( 131)									_hx_tmp2 = !(point);
            								}
            								else {
HXLINE( 131)									_hx_tmp2 = false;
            								}
HXDLIN( 131)								if (_hx_tmp2) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								if (minus) {
HXLINE( 131)									minus = false;
HXDLIN( 131)									zero = true;
            								}
HXDLIN( 131)								digit = true;
            							}
            							break;
            							case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 131)								bool _hx_tmp3;
HXDLIN( 131)								if (zero) {
HXLINE( 131)									_hx_tmp3 = !(point);
            								}
            								else {
HXLINE( 131)									_hx_tmp3 = false;
            								}
HXDLIN( 131)								if (_hx_tmp3) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								if (minus) {
HXLINE( 131)									minus = false;
            								}
HXDLIN( 131)								digit = true;
HXDLIN( 131)								zero = false;
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE( 131)								bool _hx_tmp4;
HXDLIN( 131)								bool _hx_tmp5;
HXDLIN( 131)								if (!(minus)) {
HXLINE( 131)									_hx_tmp5 = zero;
            								}
            								else {
HXLINE( 131)									_hx_tmp5 = true;
            								}
HXDLIN( 131)								if (!(_hx_tmp5)) {
HXLINE( 131)									_hx_tmp4 = e;
            								}
            								else {
HXLINE( 131)									_hx_tmp4 = true;
            								}
HXDLIN( 131)								if (_hx_tmp4) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								digit = false;
HXDLIN( 131)								e = true;
            							}
            							break;
            							default:{
HXLINE( 131)								if (!(digit)) {
HXLINE( 131)									this->invalidNumber(start);
            								}
HXDLIN( 131)								this->pos--;
HXDLIN( 131)								end = true;
            							}
            						}
HXDLIN( 131)						if (end) {
HXLINE( 131)							goto _hx_goto_2;
            						}
            					}
            					_hx_goto_2:;
HXDLIN( 131)					::String f = this->str;
HXDLIN( 131)					Float f1 = ::Std_obj::parseFloat(f.substr(start,(this->pos - start)));
HXDLIN( 131)					int i = ::Std_obj::_hx_int(f1);
HXDLIN( 131)					if ((i == f1)) {
HXLINE( 131)						return i;
            					}
            					else {
HXLINE( 131)						return f1;
            					}
            				}
            				break;
            				case (int)91: {
HXLINE(  89)					::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  89)					 ::Dynamic comma = null();
HXLINE(  90)					while(true){
HXLINE(  91)						int c2 = this->str.cca(this->pos++);
HXLINE(  92)						switch((int)(c2)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)44: {
HXLINE(  99)								if (comma) {
HXLINE(  99)									comma = false;
            								}
            								else {
HXLINE(  99)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)93: {
HXLINE(  96)								if (hx::IsEq( comma,false )) {
HXLINE(  96)									this->invalidChar();
            								}
HXLINE(  97)								return arr;
            							}
            							break;
            							default:{
HXLINE( 101)								if (comma) {
HXLINE( 101)									this->invalidChar();
            								}
HXLINE( 102)								this->pos--;
HXLINE( 103)								arr->push(this->parseRec());
HXLINE( 104)								comma = true;
            							}
            						}
            					}
            				}
            				break;
            				case (int)102: {
HXLINE( 115)					int save = this->pos;
HXLINE( 116)					bool _hx_tmp6;
HXDLIN( 116)					bool _hx_tmp7;
HXDLIN( 116)					bool _hx_tmp8;
HXDLIN( 116)					if ((this->str.cca(this->pos++) == (int)97)) {
HXLINE( 116)						_hx_tmp8 = (this->str.cca(this->pos++) != (int)108);
            					}
            					else {
HXLINE( 116)						_hx_tmp8 = true;
            					}
HXDLIN( 116)					if (!(_hx_tmp8)) {
HXLINE( 116)						_hx_tmp7 = (this->str.cca(this->pos++) != (int)115);
            					}
            					else {
HXLINE( 116)						_hx_tmp7 = true;
            					}
HXDLIN( 116)					if (!(_hx_tmp7)) {
HXLINE( 116)						_hx_tmp6 = (this->str.cca(this->pos++) != (int)101);
            					}
            					else {
HXLINE( 116)						_hx_tmp6 = true;
            					}
HXDLIN( 116)					if (_hx_tmp6) {
HXLINE( 117)						this->pos = save;
HXLINE( 118)						this->invalidChar();
            					}
HXLINE( 120)					return false;
            				}
            				break;
            				case (int)110: {
HXLINE( 122)					int save1 = this->pos;
HXLINE( 123)					bool _hx_tmp9;
HXDLIN( 123)					bool _hx_tmp10;
HXDLIN( 123)					if ((this->str.cca(this->pos++) == (int)117)) {
HXLINE( 123)						_hx_tmp10 = (this->str.cca(this->pos++) != (int)108);
            					}
            					else {
HXLINE( 123)						_hx_tmp10 = true;
            					}
HXDLIN( 123)					if (!(_hx_tmp10)) {
HXLINE( 123)						_hx_tmp9 = (this->str.cca(this->pos++) != (int)108);
            					}
            					else {
HXLINE( 123)						_hx_tmp9 = true;
            					}
HXDLIN( 123)					if (_hx_tmp9) {
HXLINE( 124)						this->pos = save1;
HXLINE( 125)						this->invalidChar();
            					}
HXLINE( 127)					return null();
            				}
            				break;
            				case (int)116: {
HXLINE( 108)					int save2 = this->pos;
HXLINE( 109)					bool _hx_tmp11;
HXDLIN( 109)					bool _hx_tmp12;
HXDLIN( 109)					if ((this->str.cca(this->pos++) == (int)114)) {
HXLINE( 109)						_hx_tmp12 = (this->str.cca(this->pos++) != (int)117);
            					}
            					else {
HXLINE( 109)						_hx_tmp12 = true;
            					}
HXDLIN( 109)					if (!(_hx_tmp12)) {
HXLINE( 109)						_hx_tmp11 = (this->str.cca(this->pos++) != (int)101);
            					}
            					else {
HXLINE( 109)						_hx_tmp11 = true;
            					}
HXDLIN( 109)					if (_hx_tmp11) {
HXLINE( 110)						this->pos = save2;
HXLINE( 111)						this->invalidChar();
            					}
HXLINE( 113)					return true;
            				}
            				break;
            				case (int)123: {
HXLINE(  63)					 ::Dynamic obj =  ::Dynamic(hx::Anon_obj::Create(0));
HXDLIN(  63)					::String field = null();
HXDLIN(  63)					 ::Dynamic comma1 = null();
HXLINE(  64)					while(true){
HXLINE(  65)						int c3 = this->str.cca(this->pos++);
HXLINE(  66)						switch((int)(c3)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)34: {
HXLINE(  82)								if (comma1) {
HXLINE(  82)									this->invalidChar();
            								}
HXLINE(  83)								field = this->parseString();
            							}
            							break;
            							case (int)44: {
HXLINE(  80)								if (comma1) {
HXLINE(  80)									comma1 = false;
            								}
            								else {
HXLINE(  80)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)58: {
HXLINE(  74)								if (hx::IsNull( field )) {
HXLINE(  75)									this->invalidChar();
            								}
HXLINE(  76)								::Reflect_obj::setField(obj,field,this->parseRec());
HXLINE(  77)								field = null();
HXLINE(  78)								comma1 = true;
            							}
            							break;
            							case (int)125: {
HXLINE(  70)								bool _hx_tmp13;
HXDLIN(  70)								if (hx::IsNull( field )) {
HXLINE(  70)									_hx_tmp13 = hx::IsEq( comma1,false );
            								}
            								else {
HXLINE(  70)									_hx_tmp13 = true;
            								}
HXDLIN(  70)								if (_hx_tmp13) {
HXLINE(  71)									this->invalidChar();
            								}
HXLINE(  72)								return obj;
            							}
            							break;
            							default:{
HXLINE(  85)								this->invalidChar();
            							}
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 133)					this->invalidChar();
            				}
            			}
            		}
HXLINE(  57)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseRec,return )

::String JsonParser_obj::parseString(){
            	HX_GC_STACKFRAME(&_hx_pos_c5fe9f5f36ee8c2f_138_parseString)
HXLINE( 139)		int start = this->pos;
HXLINE( 140)		 ::StringBuf buf = null();
HXLINE( 141)		while(true){
HXLINE( 142)			int c = this->str.cca(this->pos++);
HXLINE( 143)			if ((c == (int)34)) {
HXLINE( 144)				goto _hx_goto_6;
            			}
HXLINE( 145)			if ((c == (int)92)) {
HXLINE( 146)				if (hx::IsNull( buf )) {
HXLINE( 147)					buf =  ::StringBuf_obj::__alloc( HX_CTX );
            				}
HXLINE( 149)				{
HXLINE( 149)					::String s = this->str;
HXDLIN( 149)					 ::Dynamic len = ((this->pos - start) - (int)1);
HXDLIN( 149)					if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 149)						buf->flush();
            					}
HXDLIN( 149)					if (hx::IsNull( buf->b )) {
HXLINE( 149)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(start,len));
            					}
            					else {
HXLINE( 149)						::Array< ::String > buf1 = buf->b;
HXDLIN( 149)						buf1->push(s.substr(start,len));
            					}
            				}
HXLINE( 150)				c = this->str.cca(this->pos++);
HXLINE( 151)				switch((int)(c)){
            					case (int)34: case (int)47: case (int)92: {
HXLINE( 157)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 157)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 157)						buf->charBuf->push(c);
            					}
            					break;
            					case (int)98: {
HXLINE( 155)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 155)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 155)						buf->charBuf->push((int)8);
            					}
            					break;
            					case (int)102: {
HXLINE( 156)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 156)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 156)						buf->charBuf->push((int)12);
            					}
            					break;
            					case (int)110: {
HXLINE( 153)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 153)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 153)						buf->charBuf->push((int)10);
            					}
            					break;
            					case (int)114: {
HXLINE( 152)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 152)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 152)						buf->charBuf->push((int)13);
            					}
            					break;
            					case (int)116: {
HXLINE( 154)						if (hx::IsNull( buf->charBuf )) {
HXLINE( 154)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 154)						buf->charBuf->push((int)9);
            					}
            					break;
            					case (int)117: {
HXLINE( 159)						 ::Dynamic uc = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + this->str.substr(this->pos,(int)4)));
HXLINE( 160)						 ::haxe::format::JsonParser _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 160)						_hx_tmp->pos = (_hx_tmp->pos + (int)4);
HXLINE( 162)						if (hx::IsLessEq( uc,(int)127 )) {
HXLINE( 163)							if (hx::IsNull( buf->charBuf )) {
HXLINE( 163)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 163)							buf->charBuf->push(uc);
            						}
            						else {
HXLINE( 164)							if (hx::IsLessEq( uc,(int)2047 )) {
HXLINE( 165)								{
HXLINE( 165)									if (hx::IsNull( buf->charBuf )) {
HXLINE( 165)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 165)									::Array< char > buf2 = buf->charBuf;
HXDLIN( 165)									buf2->push(((int)(int)192 | (int)((int)uc >> (int)(int)6)));
            								}
HXLINE( 166)								{
HXLINE( 166)									if (hx::IsNull( buf->charBuf )) {
HXLINE( 166)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 166)									::Array< char > buf3 = buf->charBuf;
HXDLIN( 166)									buf3->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            								}
            							}
            							else {
HXLINE( 167)								if (hx::IsLessEq( uc,(int)65535 )) {
HXLINE( 168)									{
HXLINE( 168)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 168)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 168)										::Array< char > buf4 = buf->charBuf;
HXDLIN( 168)										buf4->push(((int)(int)224 | (int)((int)uc >> (int)(int)12)));
            									}
HXLINE( 169)									{
HXLINE( 169)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 169)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 169)										::Array< char > buf5 = buf->charBuf;
HXDLIN( 169)										buf5->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)6) & (int)(int)63)));
            									}
HXLINE( 170)									{
HXLINE( 170)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 170)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 170)										::Array< char > buf6 = buf->charBuf;
HXDLIN( 170)										buf6->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            									}
            								}
            								else {
HXLINE( 172)									{
HXLINE( 172)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 172)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 172)										::Array< char > buf7 = buf->charBuf;
HXDLIN( 172)										buf7->push(((int)(int)240 | (int)((int)uc >> (int)(int)18)));
            									}
HXLINE( 173)									{
HXLINE( 173)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 173)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 173)										::Array< char > buf8 = buf->charBuf;
HXDLIN( 173)										buf8->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)12) & (int)(int)63)));
            									}
HXLINE( 174)									{
HXLINE( 174)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 174)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 174)										::Array< char > buf9 = buf->charBuf;
HXDLIN( 174)										buf9->push(((int)(int)128 | (int)((int)((int)uc >> (int)(int)6) & (int)(int)63)));
            									}
HXLINE( 175)									{
HXLINE( 175)										if (hx::IsNull( buf->charBuf )) {
HXLINE( 175)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 175)										::Array< char > buf10 = buf->charBuf;
HXDLIN( 175)										buf10->push(((int)(int)128 | (int)((int)uc & (int)(int)63)));
            									}
            								}
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 181)						::String _hx_tmp1 = ((HX_("Invalid escape sequence \\",73,af,f7,b2) + ::String::fromCharCode(c)) + HX_(" at position ",0a,c2,01,e0));
HXDLIN( 181)						HX_STACK_DO_THROW((_hx_tmp1 + (this->pos - (int)1)));
            					}
            				}
HXLINE( 183)				start = this->pos;
            			}
            			else {
HXLINE( 187)				if ((c >= (int)128)) {
HXLINE( 188)					this->pos++;
HXLINE( 189)					if ((c >= (int)252)) {
HXLINE( 189)						 ::haxe::format::JsonParser _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 189)						_hx_tmp2->pos = (_hx_tmp2->pos + (int)4);
            					}
            					else {
HXLINE( 190)						if ((c >= (int)248)) {
HXLINE( 190)							 ::haxe::format::JsonParser _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 190)							_hx_tmp3->pos = (_hx_tmp3->pos + (int)3);
            						}
            						else {
HXLINE( 191)							if ((c >= (int)240)) {
HXLINE( 191)								 ::haxe::format::JsonParser _hx_tmp4 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 191)								_hx_tmp4->pos = (_hx_tmp4->pos + (int)2);
            							}
            							else {
HXLINE( 192)								if ((c >= (int)224)) {
HXLINE( 192)									this->pos++;
            								}
            							}
            						}
            					}
            				}
            				else {
HXLINE( 195)					if ((c == (int)0)) {
HXLINE( 196)						HX_STACK_DO_THROW(HX_("Unclosed string",ac,02,ef,ea));
            					}
            				}
            			}
            		}
            		_hx_goto_6:;
HXLINE( 198)		if (hx::IsNull( buf )) {
HXLINE( 199)			::String _hx_tmp5 = this->str;
HXDLIN( 199)			return _hx_tmp5.substr(start,((this->pos - start) - (int)1));
            		}
            		else {
HXLINE( 202)			{
HXLINE( 202)				::String s1 = this->str;
HXDLIN( 202)				 ::Dynamic len1 = ((this->pos - start) - (int)1);
HXDLIN( 202)				if (hx::IsNotNull( buf->charBuf )) {
HXLINE( 202)					buf->flush();
            				}
HXDLIN( 202)				if (hx::IsNull( buf->b )) {
HXLINE( 202)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,s1.substr(start,len1));
            				}
            				else {
HXLINE( 202)					::Array< ::String > buf11 = buf->b;
HXDLIN( 202)					buf11->push(s1.substr(start,len1));
            				}
            			}
HXLINE( 203)			return buf->toString();
            		}
HXLINE( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseString,return )

void JsonParser_obj::invalidChar(){
            	HX_STACKFRAME(&_hx_pos_c5fe9f5f36ee8c2f_249_invalidChar)
HXLINE( 250)		this->pos--;
HXLINE( 251)		::String _hx_tmp = ((HX_("Invalid char ",81,66,ec,29) + this->str.cca(this->pos)) + HX_(" at position ",0a,c2,01,e0));
HXDLIN( 251)		HX_STACK_DO_THROW((_hx_tmp + this->pos));
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,invalidChar,(void))

void JsonParser_obj::invalidNumber(int start){
            	HX_STACKFRAME(&_hx_pos_c5fe9f5f36ee8c2f_255_invalidNumber)
HXDLIN( 255)		::String _hx_tmp = this->str;
HXDLIN( 255)		HX_STACK_DO_THROW((((HX_("Invalid number at position ",d8,9d,6f,13) + start) + HX_(": ",a6,32,00,00)) + _hx_tmp.substr(start,(this->pos - start))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonParser_obj,invalidNumber,(void))


hx::ObjectPtr< JsonParser_obj > JsonParser_obj::__new(::String str) {
	hx::ObjectPtr< JsonParser_obj > __this = new JsonParser_obj();
	__this->__construct(str);
	return __this;
}

hx::ObjectPtr< JsonParser_obj > JsonParser_obj::__alloc(hx::Ctx *_hx_ctx,::String str) {
	JsonParser_obj *__this = (JsonParser_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JsonParser_obj), true, "haxe.format.JsonParser"));
	*(void **)__this = JsonParser_obj::_hx_vtable;
	__this->__construct(str);
	return __this;
}

JsonParser_obj::JsonParser_obj()
{
}

void JsonParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonParser);
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void JsonParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(str,"str");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

hx::Val JsonParser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return hx::Val( str ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return hx::Val( pos ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parseRec") ) { return hx::Val( parseRec_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { return hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return hx::Val( invalidChar_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidNumber") ) { return hx::Val( invalidNumber_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JsonParser_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JsonParser_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(JsonParser_obj,str),HX_HCSTRING("str","\xb1","\xa8","\x57","\x00")},
	{hx::fsInt,(int)offsetof(JsonParser_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JsonParser_obj_sStaticStorageInfo = 0;
#endif

static ::String JsonParser_obj_sMemberFields[] = {
	HX_HCSTRING("str","\xb1","\xa8","\x57","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("parseRec","\xdd","\xe2","\x78","\xd6"),
	HX_HCSTRING("parseString","\x64","\xd5","\x6c","\x8c"),
	HX_HCSTRING("invalidChar","\x6d","\xad","\xce","\xa9"),
	HX_HCSTRING("invalidNumber","\x20","\xe9","\xeb","\xa6"),
	::String(null()) };

static void JsonParser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JsonParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JsonParser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JsonParser_obj::__mClass,"__mClass");
};

#endif

hx::Class JsonParser_obj::__mClass;

void JsonParser_obj::__register()
{
	hx::Object *dummy = new JsonParser_obj;
	JsonParser_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.format.JsonParser","\xd6","\x2a","\xbf","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JsonParser_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JsonParser_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JsonParser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JsonParser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonParser_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace format

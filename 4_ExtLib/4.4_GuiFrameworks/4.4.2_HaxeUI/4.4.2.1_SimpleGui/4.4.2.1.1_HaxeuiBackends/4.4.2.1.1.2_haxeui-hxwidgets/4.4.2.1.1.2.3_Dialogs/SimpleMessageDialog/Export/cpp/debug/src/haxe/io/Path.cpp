// GeneratedByHaxe
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6cfed01bf295c856_210_normalize,"haxe.io.Path","normalize",0x585a68e4,"haxe.io.Path.normalize","/usr/share/haxe/std/haxe/io/Path.hx",210,0x457392de)
static const ::String _hx_array_data_4ec6cf05_3[] = {
	HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_4[] = {
	HX_(":",3a,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_5[] = {
	HX_("/",2f,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6cfed01bf295c856_262_addTrailingSlash,"haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","/usr/share/haxe/std/haxe/io/Path.hx",262,0x457392de)
HX_LOCAL_STACK_FRAME(_hx_pos_6cfed01bf295c856_287_removeTrailingSlashes,"haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","/usr/share/haxe/std/haxe/io/Path.hx",287,0x457392de)
namespace haxe{
namespace io{

void Path_obj::__construct() { }

Dynamic Path_obj::__CreateEmpty() { return new Path_obj; }

void *Path_obj::_hx_vtable = 0;

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Path_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x044b6ab5;
}

::String Path_obj::normalize(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_6cfed01bf295c856_210_normalize)
HXLINE( 211)		::String slash = HX_("/",2f,00,00,00);
HXLINE( 212)		path = path.split(HX_("\\",5c,00,00,00))->join(slash);
HXLINE( 213)		if ((path == slash)) {
HXLINE( 213)			return slash;
            		}
HXLINE( 215)		::Array< ::String > target = ::Array_obj< ::String >::__new(0);
HXLINE( 217)		{
HXLINE( 217)			int _g = (int)0;
HXDLIN( 217)			::Array< ::String > _g1 = path.split(slash);
HXDLIN( 217)			while((_g < _g1->length)){
HXLINE( 217)				::String token = _g1->__get(_g);
HXDLIN( 217)				_g = (_g + (int)1);
HXLINE( 218)				bool _hx_tmp;
HXDLIN( 218)				bool _hx_tmp1;
HXDLIN( 218)				if ((token == HX_("..",40,28,00,00))) {
HXLINE( 218)					_hx_tmp1 = (target->length > (int)0);
            				}
            				else {
HXLINE( 218)					_hx_tmp1 = false;
            				}
HXDLIN( 218)				if (_hx_tmp1) {
HXLINE( 218)					_hx_tmp = (target->__get((target->length - (int)1)) != HX_("..",40,28,00,00));
            				}
            				else {
HXLINE( 218)					_hx_tmp = false;
            				}
HXDLIN( 218)				if (_hx_tmp) {
HXLINE( 219)					target->pop();
            				}
            				else {
HXLINE( 220)					if ((token != HX_(".",2e,00,00,00))) {
HXLINE( 221)						target->push(token);
            					}
            				}
            			}
            		}
HXLINE( 225)		::String tmp = target->join(slash);
HXLINE( 226)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([^:])/+",d7,b8,64,f0),HX_("g",67,00,00,00));
HXLINE( 227)		::String result = regex->replace(tmp,(HX_("$1",8d,1f,00,00) + slash));
HXLINE( 228)		 ::StringBuf acc =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 229)		bool colon = false;
HXLINE( 230)		bool slashes = false;
HXLINE( 231)		{
HXLINE( 231)			int _g11 = (int)0;
HXDLIN( 231)			int _g2 = tmp.length;
HXDLIN( 231)			while((_g11 < _g2)){
HXLINE( 231)				_g11 = (_g11 + (int)1);
HXDLIN( 231)				int i = (_g11 - (int)1);
HXLINE( 232)				{
HXLINE( 232)					int _g21 = tmp.cca(i);
HXDLIN( 232)					switch((int)(_g21)){
            						case (int)47: {
HXLINE( 236)							if (!(colon)) {
HXLINE( 237)								slashes = true;
            							}
            							else {
HXLINE( 238)								int i1 = _g21;
HXDLIN( 238)								{
HXLINE( 239)									colon = false;
HXLINE( 240)									if (slashes) {
HXLINE( 241)										{
HXLINE( 241)											if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 241)												acc->flush();
            											}
HXDLIN( 241)											if (hx::IsNull( acc->b )) {
HXLINE( 241)												acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_3,1);
            											}
            											else {
HXLINE( 241)												acc->b->push(HX_("/",2f,00,00,00));
            											}
            										}
HXLINE( 242)										slashes = false;
            									}
HXLINE( 244)									{
HXLINE( 244)										if (hx::IsNull( acc->charBuf )) {
HXLINE( 244)											acc->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 244)										acc->charBuf->push(i1);
            									}
            								}
            							}
            						}
            						break;
            						case (int)58: {
HXLINE( 234)							{
HXLINE( 234)								if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 234)									acc->flush();
            								}
HXDLIN( 234)								if (hx::IsNull( acc->b )) {
HXLINE( 234)									acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_4,1);
            								}
            								else {
HXLINE( 234)									acc->b->push(HX_(":",3a,00,00,00));
            								}
            							}
HXLINE( 235)							colon = true;
            						}
            						break;
            						default:{
HXLINE( 238)							int i2 = _g21;
HXDLIN( 238)							{
HXLINE( 239)								colon = false;
HXLINE( 240)								if (slashes) {
HXLINE( 241)									{
HXLINE( 241)										if (hx::IsNotNull( acc->charBuf )) {
HXLINE( 241)											acc->flush();
            										}
HXDLIN( 241)										if (hx::IsNull( acc->b )) {
HXLINE( 241)											acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_5,1);
            										}
            										else {
HXLINE( 241)											acc->b->push(HX_("/",2f,00,00,00));
            										}
            									}
HXLINE( 242)									slashes = false;
            								}
HXLINE( 244)								{
HXLINE( 244)									if (hx::IsNull( acc->charBuf )) {
HXLINE( 244)										acc->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 244)									acc->charBuf->push(i2);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 247)		return acc->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,normalize,return )

::String Path_obj::addTrailingSlash(::String path){
            	HX_STACKFRAME(&_hx_pos_6cfed01bf295c856_262_addTrailingSlash)
HXLINE( 263)		if ((path.length == (int)0)) {
HXLINE( 264)			return HX_("/",2f,00,00,00);
            		}
HXLINE( 265)		int c1 = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 266)		int c2 = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE( 267)		if ((c1 < c2)) {
HXLINE( 268)			if ((c2 != (path.length - (int)1))) {
HXLINE( 268)				return (path + HX_("\\",5c,00,00,00));
            			}
            			else {
HXLINE( 269)				return path;
            			}
            		}
            		else {
HXLINE( 271)			if ((c1 != (path.length - (int)1))) {
HXLINE( 271)				return (path + HX_("/",2f,00,00,00));
            			}
            			else {
HXLINE( 272)				return path;
            			}
            		}
HXLINE( 267)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes(::String path){
            	HX_STACKFRAME(&_hx_pos_6cfed01bf295c856_287_removeTrailingSlashes)
HXLINE( 288)		while(true){
HXLINE( 289)			 ::Dynamic _g = path.charCodeAt((path.length - (int)1));
HXDLIN( 289)			if (hx::IsNull( _g )) {
HXLINE( 291)				goto _hx_goto_7;
            			}
            			else {
HXLINE( 289)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==(int)47) ||  (_hx_switch_0==(int)92) ){
HXLINE( 290)					path = path.substr((int)0,(int)-1);
HXDLIN( 290)					goto _hx_goto_8;
            				}
            				/* default */{
HXLINE( 291)					goto _hx_goto_7;
            				}
            				_hx_goto_8:;
            			}
            		}
            		_hx_goto_7:;
HXLINE( 294)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Path_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

static void Path_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Path_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String Path_obj_sStaticFields[] = {
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("addTrailingSlash","\xe0","\xd6","\xeb","\x26"),
	HX_HCSTRING("removeTrailingSlashes","\x8b","\xdc","\x1d","\x43"),
	::String(null())
};

void Path_obj::__register()
{
	hx::Object *dummy = new Path_obj;
	Path_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Path_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Path_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Path_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io

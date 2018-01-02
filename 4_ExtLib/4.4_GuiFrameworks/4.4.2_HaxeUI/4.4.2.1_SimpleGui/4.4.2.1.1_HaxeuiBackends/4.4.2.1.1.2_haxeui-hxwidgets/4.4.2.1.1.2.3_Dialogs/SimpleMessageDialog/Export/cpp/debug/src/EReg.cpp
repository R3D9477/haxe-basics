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

HX_DEFINE_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_30_new,"EReg","new",0x8b859e81,"EReg.new","/usr/share/haxe/std/cpp/_std/EReg.hx",30,0x3bcaa0cb)
HX_LOCAL_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_38_match,"EReg","match",0x18fda1a6,"EReg.match","/usr/share/haxe/std/cpp/_std/EReg.hx",38,0x3bcaa0cb)
HX_LOCAL_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_47_matched,"EReg","matched",0x8ce62f85,"EReg.matched","/usr/share/haxe/std/cpp/_std/EReg.hx",47,0x3bcaa0cb)
HX_LOCAL_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_52_matchedLeft,"EReg","matchedLeft",0x93fe0a2c,"EReg.matchedLeft","/usr/share/haxe/std/cpp/_std/EReg.hx",52,0x3bcaa0cb)
HX_LOCAL_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_76_split,"EReg","split",0x9749433b,"EReg.split","/usr/share/haxe/std/cpp/_std/EReg.hx",76,0x3bcaa0cb)
HX_LOCAL_STACK_FRAME(_hx_pos_0f9ac110bd093a4e_100_replace,"EReg","replace",0xae923ad5,"EReg.replace","/usr/share/haxe/std/cpp/_std/EReg.hx",100,0x3bcaa0cb)
static const ::String _hx_array_data_2dda4a0f_9[] = {
	HX_("$",24,00,00,00),
};
static const ::String _hx_array_data_2dda4a0f_10[] = {
	HX_("$",24,00,00,00),
};

void EReg_obj::__construct(::String r,::String opt){
            	HX_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_30_new)
HXLINE(  31)		::Array< ::String > a = opt.split(HX_("g",67,00,00,00));
HXLINE(  32)		this->global = (a->length > (int)1);
HXLINE(  33)		if (this->global) {
HXLINE(  34)			opt = a->join(HX_("",00,00,00,00));
            		}
HXLINE(  35)		this->r = _hx_regexp_new_options(r,opt);
            	}

Dynamic EReg_obj::__CreateEmpty() { return new EReg_obj; }

void *EReg_obj::_hx_vtable = 0;

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EReg_obj > _hx_result = new EReg_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool EReg_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dda4a0f;
}

bool EReg_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_38_match)
HXLINE(  39)		bool p = _hx_regexp_match(this->r,s,(int)0,s.length);
HXLINE(  40)		if (p) {
HXLINE(  41)			this->last = s;
            		}
            		else {
HXLINE(  43)			this->last = null();
            		}
HXLINE(  44)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched(int n){
            	HX_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_47_matched)
HXLINE(  48)		::String m = _hx_regexp_matched(this->r,n);
HXLINE(  49)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

::String EReg_obj::matchedLeft(){
            	HX_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_52_matchedLeft)
HXLINE(  53)		 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE(  54)		return this->last.substr((int)0,p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedLeft,return )

::Array< ::String > EReg_obj::split(::String s){
            	HX_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_76_split)
HXLINE(  77)		int pos = (int)0;
HXLINE(  78)		int len = s.length;
HXLINE(  79)		::Array< ::String > a = ::Array_obj< ::String >::__new();
HXLINE(  80)		bool first = true;
HXLINE(  81)		while(_hx_regexp_match(this->r,s,pos,len)){
HXLINE(  84)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE(  85)			bool _hx_tmp;
HXDLIN(  85)			if ((( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE(  85)				_hx_tmp = !(first);
            			}
            			else {
HXLINE(  85)				_hx_tmp = false;
            			}
HXDLIN(  85)			if (_hx_tmp) {
HXLINE(  86)				if ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) == s.length)) {
HXLINE(  87)					goto _hx_goto_4;
            				}
HXLINE(  88)				 ::Dynamic p1 = p;
HXDLIN(  88)				p1->__SetField(HX_("pos",94,5d,55,00),(( (int)(p1->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + (int)1),hx::paccDynamic);
            			}
HXLINE(  90)			a->push(s.substr(pos,(( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - pos)));
HXLINE(  91)			int tot = ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) )) - pos);
HXLINE(  92)			pos = (pos + tot);
HXLINE(  93)			len = (len - tot);
HXLINE(  94)			first = false;
HXLINE(  81)			if (!(this->global)) {
HXLINE(  81)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE(  96)		a->push(s.substr(pos,len));
HXLINE(  97)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,split,return )

::String EReg_obj::replace(::String s,::String by){
            	HX_GC_STACKFRAME(&_hx_pos_0f9ac110bd093a4e_100_replace)
HXLINE( 101)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 102)		int pos = (int)0;
HXLINE( 103)		int len = s.length;
HXLINE( 104)		::Array< ::String > a = by.split(HX_("$",24,00,00,00));
HXLINE( 105)		bool first = true;
HXLINE( 106)		while(_hx_regexp_match(this->r,s,pos,len)){
HXLINE( 109)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			if ((( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE( 110)				_hx_tmp = !(first);
            			}
            			else {
HXLINE( 110)				_hx_tmp = false;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 111)				if ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) == s.length)) {
HXLINE( 112)					goto _hx_goto_6;
            				}
HXLINE( 113)				 ::Dynamic p1 = p;
HXDLIN( 113)				p1->__SetField(HX_("pos",94,5d,55,00),(( (int)(p1->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + (int)1),hx::paccDynamic);
            			}
HXLINE( 115)			{
HXLINE( 115)				 ::Dynamic len1 = (( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - pos);
HXDLIN( 115)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 115)					b->flush();
            				}
HXDLIN( 115)				if (hx::IsNull( b->b )) {
HXLINE( 115)					b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos,len1));
            				}
            				else {
HXLINE( 115)					::Array< ::String > b1 = b->b;
HXDLIN( 115)					b1->push(s.substr(pos,len1));
            				}
            			}
HXLINE( 116)			if ((a->length > (int)0)) {
HXLINE( 117)				::String x = a->__get((int)0);
HXDLIN( 117)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 117)					b->flush();
            				}
HXDLIN( 117)				if (hx::IsNull( b->b )) {
HXLINE( 117)					b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 117)					::Array< ::String > b2 = b->b;
HXDLIN( 117)					b2->push(::Std_obj::string(x));
            				}
            			}
HXLINE( 118)			int i = (int)1;
HXLINE( 119)			while((i < a->length)){
HXLINE( 120)				::String k = a->__get(i);
HXLINE( 121)				 ::Dynamic c = k.charCodeAt((int)0);
HXLINE( 123)				bool _hx_tmp1;
HXDLIN( 123)				if (hx::IsGreaterEq( c,(int)49 )) {
HXLINE( 123)					_hx_tmp1 = hx::IsLessEq( c,(int)57 );
            				}
            				else {
HXLINE( 123)					_hx_tmp1 = false;
            				}
HXDLIN( 123)				if (_hx_tmp1) {
HXLINE( 124)					 ::Dynamic p2;
HXDLIN( 124)					try {
            						HX_STACK_CATCHABLE(::String, 0);
HXLINE( 124)						 ::Dynamic p3 = this->r;
HXDLIN( 124)						p2 = _hx_regexp_matched_pos(p3,(::Std_obj::_hx_int(c) - (int)48));
            					}
            					catch( ::Dynamic _hx_e){
            						if (_hx_e.IsClass< ::String >() ){
            							HX_STACK_BEGIN_CATCH
            							::String e = _hx_e;
HXLINE( 124)							p2 = null();
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
HXLINE( 125)					if (hx::IsNull( p2 )) {
HXLINE( 126)						{
HXLINE( 126)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 126)								b->flush();
            							}
HXDLIN( 126)							if (hx::IsNull( b->b )) {
HXLINE( 126)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_2dda4a0f_9,1);
            							}
            							else {
HXLINE( 126)								b->b->push(HX_("$",24,00,00,00));
            							}
            						}
HXLINE( 127)						{
HXLINE( 127)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 127)								b->flush();
            							}
HXDLIN( 127)							if (hx::IsNull( b->b )) {
HXLINE( 127)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(k));
            							}
            							else {
HXLINE( 127)								::Array< ::String > b3 = b->b;
HXDLIN( 127)								b3->push(::Std_obj::string(k));
            							}
            						}
            					}
            					else {
HXLINE( 129)						{
HXLINE( 129)							int pos1 = ( (int)(p2->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) );
HXDLIN( 129)							 ::Dynamic len2 = p2->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic);
HXDLIN( 129)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 129)								b->flush();
            							}
HXDLIN( 129)							if (hx::IsNull( b->b )) {
HXLINE( 129)								b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos1,len2));
            							}
            							else {
HXLINE( 129)								::Array< ::String > b4 = b->b;
HXDLIN( 129)								b4->push(s.substr(pos1,len2));
            							}
            						}
HXLINE( 130)						{
HXLINE( 130)							 ::Dynamic len3 = (k.length - (int)1);
HXDLIN( 130)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 130)								b->flush();
            							}
HXDLIN( 130)							if (hx::IsNull( b->b )) {
HXLINE( 130)								b->b = ::Array_obj< ::String >::__new(1)->init(0,k.substr((int)1,len3));
            							}
            							else {
HXLINE( 130)								::Array< ::String > b5 = b->b;
HXDLIN( 130)								b5->push(k.substr((int)1,len3));
            							}
            						}
            					}
            				}
            				else {
HXLINE( 132)					if (hx::IsNull( c )) {
HXLINE( 133)						{
HXLINE( 133)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 133)								b->flush();
            							}
HXDLIN( 133)							if (hx::IsNull( b->b )) {
HXLINE( 133)								b->b = ::Array_obj< ::String >::fromData( _hx_array_data_2dda4a0f_10,1);
            							}
            							else {
HXLINE( 133)								b->b->push(HX_("$",24,00,00,00));
            							}
            						}
HXLINE( 134)						i = (i + (int)1);
HXLINE( 135)						::String k2 = a->__get(i);
HXLINE( 136)						bool _hx_tmp2;
HXDLIN( 136)						if (hx::IsNotNull( k2 )) {
HXLINE( 136)							_hx_tmp2 = (k2.length > (int)0);
            						}
            						else {
HXLINE( 136)							_hx_tmp2 = false;
            						}
HXDLIN( 136)						if (_hx_tmp2) {
HXLINE( 137)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 137)								b->flush();
            							}
HXDLIN( 137)							if (hx::IsNull( b->b )) {
HXLINE( 137)								b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(k2));
            							}
            							else {
HXLINE( 137)								::Array< ::String > b6 = b->b;
HXDLIN( 137)								b6->push(::Std_obj::string(k2));
            							}
            						}
            					}
            					else {
HXLINE( 139)						::String x1 = (HX_("$",24,00,00,00) + k);
HXDLIN( 139)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 139)							b->flush();
            						}
HXDLIN( 139)						if (hx::IsNull( b->b )) {
HXLINE( 139)							b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 139)							::Array< ::String > b7 = b->b;
HXDLIN( 139)							b7->push(::Std_obj::string(x1));
            						}
            					}
            				}
HXLINE( 140)				i = (i + (int)1);
            			}
HXLINE( 142)			int tot = ((( (int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) )) - pos);
HXLINE( 143)			pos = (pos + tot);
HXLINE( 144)			len = (len - tot);
HXLINE( 145)			first = false;
HXLINE( 106)			if (!(this->global)) {
HXLINE( 106)				goto _hx_goto_6;
            			}
            		}
            		_hx_goto_6:;
HXLINE( 147)		{
HXLINE( 147)			if (hx::IsNotNull( b->charBuf )) {
HXLINE( 147)				b->flush();
            			}
HXDLIN( 147)			if (hx::IsNull( b->b )) {
HXLINE( 147)				b->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(pos,len));
            			}
            			else {
HXLINE( 147)				::Array< ::String > b8 = b->b;
HXDLIN( 147)				b8->push(s.substr(pos,len));
            			}
            		}
HXLINE( 148)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )


hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt) {
	hx::ObjectPtr< EReg_obj > __this = new EReg_obj();
	__this->__construct(r,opt);
	return __this;
}

hx::ObjectPtr< EReg_obj > EReg_obj::__alloc(hx::Ctx *_hx_ctx,::String r,::String opt) {
	EReg_obj *__this = (EReg_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EReg_obj), true, "EReg"));
	*(void **)__this = EReg_obj::_hx_vtable;
	__this->__construct(r,opt);
	return __this;
}

EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

hx::Val EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return hx::Val( last ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return hx::Val( match_dyn() ); }
		if (HX_FIELD_EQ(inName,"split") ) { return hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return hx::Val( global ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return hx::Val( matched_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return hx::Val( replace_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matchedLeft") ) { return hx::Val( matchedLeft_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EReg_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EReg_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EReg_obj_sStaticStorageInfo = 0;
#endif

static ::String EReg_obj_sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("matched","\xe4","\x3c","\x7c","\x89"),
	HX_HCSTRING("matchedLeft","\x0b","\xb3","\x2f","\x7c"),
	HX_HCSTRING("split","\xda","\xea","\x6e","\x81"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	::String(null()) };

static void EReg_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EReg_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#endif

hx::Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	hx::Object *dummy = new EReg_obj;
	EReg_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EReg_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EReg_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EReg_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EReg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EReg_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


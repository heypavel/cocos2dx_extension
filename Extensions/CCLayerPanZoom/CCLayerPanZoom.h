<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=utf-8" />
<title>Cocos2d-x | CCLayerPanZoom.h</title>
<meta name="description" content="cocos2d-x is a cross platform open source free 2D game engine for mobile gamedev, that is fast and stable, easy to learn and use" />
<meta name="keywords" content="cocos2d-x,cocos2d,game engine,opengl,cross,multi,platform,iphone,ipad,android,windows,metro,bada,marmalade,playbook" />
<meta name="csrf-param" content="authenticity_token"/>
<meta name="csrf-token" content="gra7rO0+uhWGrqumCz/iiQFt5UR8zqIiprqCdSqmsCk="/>
<script type="text/javascript">
//<![CDATA[
window.__CF=window.__CF||{};window.__CF.AJS={"ga_key":{"ua":"UA-3216502-3","ga_bs":"2"},"vig_key":{"sid":"d654e26afef9085d79aba37dfe97be28"}};
//]]>
</script>
<script type="text/javascript">
//<![CDATA[
try{if (!window.CloudFlare) { var CloudFlare=[{verbose:0,p:0,byc:0,owlid:"cf",mirage:{responsive:0,lazy:0},oracle:0,paths:{cloudflare:"/cdn-cgi/nexp/aav=1870252173/"},atok:"3751d4ba65f9b2d46a156f8769ac6937",zone:"cocos2d-x.org",rocket:"0",apps:{"ga_key":{"ua":"UA-3216502-3","ga_bs":"2"},"vig_key":{"sid":"d654e26afef9085d79aba37dfe97be28"}}}];var a=document.createElement("script"),b=document.getElementsByTagName("script")[0];a.async=!0;a.src="//ajax.cloudflare.com/cdn-cgi/nexp/aav=4114775854/cloudflare.min.js";b.parentNode.insertBefore(a,b);}}catch(e){};
//]]>
</script>
<link rel='shortcut icon' href='http://files.cocos2d-x.org/favicon.ico?1325350351' />
<link href="http://files.cocos2d-x.org/themes/cocos2dx_blue/stylesheets/application.css?1347614658" media="all" rel="stylesheet" type="text/css" />

<link href="http://files.cocos2d-x.org/stylesheets/coderay.css?1347592803" media="all" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="http://w.sharethis.com/button/buttons.js"></script>
<script type="text/javascript">stLight.options({publisher: "d7067c60-ba30-40ba-a7db-6db0699b48d6"}); </script>
<script src="http://files.cocos2d-x.org/javascripts/prototype.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/effects.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/dragdrop.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/controls.js?1325230646" type="text/javascript"></script>
<script src="http://files.cocos2d-x.org/javascripts/application.js?1325230646" type="text/javascript"></script>
<script type="text/javascript">
//<![CDATA[
Event.observe(window, 'load', function(){ new WarnLeavingUnsaved('Die aktuellen Änderungen gehen verloren, wenn Sie diese Seite verlassen.'); });
//]]>
</script>

<!--[if IE 6]>
    <style type="text/css">
      * html body{ width: expression( document.documentElement.clientWidth < 900 ? '900px' : '100%' ); }
      body {behavior: url(http://files.cocos2d-x.org/stylesheets/csshover.htc?1325230646);}
    </style>
<![endif]-->
<link href="http://files.cocos2d-x.org/plugin_assets/redmine_ads/stylesheets/redmine_ads.css?1325230646" media="screen" rel="stylesheet" type="text/css" /> <style type="text/css">#admin-menu a.contacts { background-image: url('http://files.cocos2d-x.org/plugin_assets/redmine_contacts/images/vcard.png?1350809807'); }</style> 
  
  

  <link href="http://files.cocos2d-x.org/plugin_assets/redmine_wiki_extensions/stylesheets/wiki_extensions.css?1325230646" media="screen" rel="stylesheet" type="text/css" />
  <script src="http://files.cocos2d-x.org/plugin_assets/redmine_wiki_extensions/javascripts/wiki_extensions.js?1325230646" type="text/javascript"></script>
  


<!-- page specific tags -->
    <link href="http://files.cocos2d-x.org/stylesheets/scm.css?1325230646" media="screen" rel="stylesheet" type="text/css" /><script type="text/javascript">
/* <![CDATA[ */
var _gaq = _gaq || [];
_gaq.push(['_setAccount', 'UA-3216502-3']);
_gaq.push(['_trackPageview']);

(function() {
var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
})();

(function(b){(function(a){"__CF"in b&&"DJS"in b.__CF?b.__CF.DJS.push(a):"addEventListener"in b?b.addEventListener("load",a,!1):b.attachEvent("onload",a)})(function(){"FB"in b&&"Event"in FB&&"subscribe"in FB.Event&&(FB.Event.subscribe("edge.create",function(a){_gaq.push(["_trackSocial","facebook","like",a])}),FB.Event.subscribe("edge.remove",function(a){_gaq.push(["_trackSocial","facebook","unlike",a])}),FB.Event.subscribe("message.send",function(a){_gaq.push(["_trackSocial","facebook","send",a])}));"twttr"in b&&"events"in twttr&&"bind"in twttr.events&&twttr.events.bind("tweet",function(a){if(a){var b;if(a.target&&a.target.nodeName=="IFRAME")a:{if(a=a.target.src){a=a.split("#")[0].match(/[^?=&]+=([^&]*)?/g);b=0;for(var c;c=a[b];++b)if(c.indexOf("url")===0){b=unescape(c.split("=")[1]);break a}}b=void 0}_gaq.push(["_trackSocial","twitter","tweet",b])}})})})(window);
/* ]]> */
</script>
</head>
<body class="theme-Cocos2dx blue controller-attachments action-show">
<div id="wrapper">
<div id="wrapper2">
<div id="top-menu">
    <div id="account">
        <ul><li><a href="/login" class="login">Anmelden</a></li>
<li><a href="/account/register" class="register">Registrieren</a></li></ul>    </div>
    
    <ul><li><a href="/" class="home">Hauptseite</a></li>
<li><a href="/projects" class="projects">Projekte</a></li>
<li><a href="http://www.redmine.org/guide" class="help">Hilfe</a></li></ul></div>

<div id="header">
    
    <!-- 2dx banner, walzer add -->
    <div id="banner-left">
        <img src="/images/banner-left.png"/>
    </div>
    <div id="banner-right">
        <img src="/images/banner-right.png" align="right"/>
    </div>
    
    <!-- <h1>cocos2d-x</h1> -->

    
    <div id="main-menu-bg"></div>
    <div id="main-menu">
        <ul><li><a href="/projects/cocos2d-x/news" class="news">News</a></li>
<li><a href="/projects/cocos2d-x/roadmap" class="roadmap">Roadmap</a></li>
<li><a href="/projects/cocos2d-x/issues" class="issues">Tickets</a></li>
<li><a href="/projects/cocos2d-x/wiki" class="wiki">Wiki</a></li>
<li><a href="/wiki_extensions/forward_wiki_page/cocos2d-x?menu_id=1" class="wiki-extensions1">Download</a></li>
<li><a href="/wiki_extensions/forward_wiki_page/cocos2d-x?menu_id=2" class="wiki-extensions2">Reference</a></li>
<li><a href="/projects/cocos2d-x/boards" class="boards">Foren</a></li>
<li><a href="/projects/cocos2d-x/assets" class="assets">Extensions</a></li>
<li><a href="/projects/cocos2d-x/apps" class="apps">Games</a></li></ul>
    </div>
    

    
    <div id="quick-search">
        <form action="/search/index/cocos2d-x" method="get">
        
        <label for='q'>
          <a href="/search/index/cocos2d-x" accesskey="4">Suche</a>:
        </label>
        <input accesskey="f" class="small" id="q" name="q" size="20" type="text" />
        </form>
        <!--  -->
    </div>
    
</div>

<div class="nosidebar" id="main">
    <div id="sidebar">
        
        <div class="redmine_ads"><br/>
<!- important links -->
<h3>Stable Releases</h3>
<ul>
   <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-x-2.0.3.zip">2.0.3 (2012-09-26)</a></li>
   <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-x-2.0.2.zip">2.0.2 (2012-08-30)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-rc2-x-2.0.1.zip">2.0.1 (2012-06-29)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-2.0-rc0a-x-2.0.zip">2.0 (2012-05-31)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-1.0.1-x-0.13.0-beta.zip">0.13.0-beta (2012-03-29)</a></li>
  <li><a href="http://cocos2d-x.googlecode.com/files/cocos2d-1.0.1-x-0.12.0.zip">0.12.0 (2012-03-05)</a></li>
</ul>
<hr>


<!-- follow us -->
<h3>Follow us</h3>
<ul>
  <li><a href="http://twitter.com/cocos2dx/">Twitter</a></li>
  <li><a href="http://weibo.com/cocos2dx/">Weibo</a></li>
</ul>
<hr>


<!-- here's clustrmaps -->
<h3>Visitors</h3>
<ul><li>
<a href="http://www3.clustrmaps.com/counter/maps.php?url=http://www.cocos2d-x.org" id="clustrMapsLink"><img src="http://www3.clustrmaps.com/counter/index2.php?url=http://www.cocos2d-x.org" style="border:0px;" alt="Locations of visitors to this page" title="Locations of visitors to this page" id="clustrMapsImg" onerror="this.onerror=null; this.src='http://www2.clustrmaps.com/images/clustrmaps-back-soon.jpg'; document.getElementById('clustrMapsLink').href='http://www2.clustrmaps.com';" />
</a>
</li></ul>
<hr>


<!-- freindly links -->
<h3>Friends</h3>
<ul>
    <li><a href="http://www.cocos2d-iphone.org">cocos2d-iphone</a></li>
    <li><a href="http://www.levelhelper.org">LevelHelper</a></li>
</ul>
<hr>


<!-- here's the google analytics code -->
<script type="text/javascript">/* CloudFlare analytics upgrade */
</script></div>
    </div>

    <div id="content">
        
        <h2>CCLayerPanZoom.h</h2>

<div class="attachments">
<p>
   <span class="author"><a href="/users/5650">Andreas Baumann</a>, 2012-10-25 16:48</span></p>
<p><a href="/attachments/download/1306/CCLayerPanZoom.h">Download</a>   <span class="size">(5,2 KB)</span></p>

</div>
&nbsp;
<div class="autoscroll">
<table class="filecontent syntaxhl">
<tbody>


  <tr>
    <th class="line-num" id="L1">
      <a href="#L1">1</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L2">
      <a href="#L2">2</a>
    </th>
    <td class="line-code">
      <pre>* CCLayerPanZoom
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L3">
      <a href="#L3">3</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L4">
      <a href="#L4">4</a>
    </th>
    <td class="line-code">
      <pre>* Copyright (c) 2011 Alexey Lang
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L5">
      <a href="#L5">5</a>
    </th>
    <td class="line-code">
      <pre>* Copyright (c) 2011 Pavel Guganov
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L6">
      <a href="#L6">6</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L7">
      <a href="#L7">7</a>
    </th>
    <td class="line-code">
      <pre>* http://www.cocos2d-x.org
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L8">
      <a href="#L8">8</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L9">
      <a href="#L9">9</a>
    </th>
    <td class="line-code">
      <pre>* Permission is hereby granted, free of charge, to any person obtaining a copy
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L10">
      <a href="#L10">10</a>
    </th>
    <td class="line-code">
      <pre>* of this software and associated documentation files (the &quot;Software&quot;), to deal
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L11">
      <a href="#L11">11</a>
    </th>
    <td class="line-code">
      <pre>* in the Software without restriction, including without limitation the rights
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L12">
      <a href="#L12">12</a>
    </th>
    <td class="line-code">
      <pre>* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L13">
      <a href="#L13">13</a>
    </th>
    <td class="line-code">
      <pre>* copies of the Software, and to permit persons to whom the Software is
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L14">
      <a href="#L14">14</a>
    </th>
    <td class="line-code">
      <pre>* furnished to do so, subject to the following conditions:
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L15">
      <a href="#L15">15</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L16">
      <a href="#L16">16</a>
    </th>
    <td class="line-code">
      <pre>* The above copyright notice and this permission notice shall be included in
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L17">
      <a href="#L17">17</a>
    </th>
    <td class="line-code">
      <pre>* all copies or substantial portions of the Software.
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L18">
      <a href="#L18">18</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L19">
      <a href="#L19">19</a>
    </th>
    <td class="line-code">
      <pre>* THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L20">
      <a href="#L20">20</a>
    </th>
    <td class="line-code">
      <pre>* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L21">
      <a href="#L21">21</a>
    </th>
    <td class="line-code">
      <pre>* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L22">
      <a href="#L22">22</a>
    </th>
    <td class="line-code">
      <pre>* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L23">
      <a href="#L23">23</a>
    </th>
    <td class="line-code">
      <pre>* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L24">
      <a href="#L24">24</a>
    </th>
    <td class="line-code">
      <pre>* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L25">
      <a href="#L25">25</a>
    </th>
    <td class="line-code">
      <pre>* THE SOFTWARE.
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L26">
      <a href="#L26">26</a>
    </th>
    <td class="line-code">
      <pre>*
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L27">
      <a href="#L27">27</a>
    </th>
    <td class="line-code">
      <pre>*/</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L28">
      <a href="#L28">28</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L29">
      <a href="#L29">29</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;cocos2d.h&quot;</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L30">
      <a href="#L30">30</a>
    </th>
    <td class="line-code">
      <pre>USING_NS_CC;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L31">
      <a href="#L31">31</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L32">
      <a href="#L32">32</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#define</span> kCCLayerPanZoomMultitouchGesturesDetectionDelay <span class="float">0</span><span class="float">.5</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L33">
      <a href="#L33">33</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L34">
      <a href="#L34">34</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#ifndef</span> INFINITY
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L35">
      <a href="#L35">35</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#ifdef</span> _MSC_VER
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L36">
      <a href="#L36">36</a>
    </th>
    <td class="line-code">
      <pre><span class="keyword">union</span> MSVC_EVIL_FLOAT_HACK
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L37">
      <a href="#L37">37</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L38">
      <a href="#L38">38</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">unsigned</span> __int8 Bytes[<span class="integer">4</span>];
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L39">
      <a href="#L39">39</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> Value;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L40">
      <a href="#L40">40</a>
    </th>
    <td class="line-code">
      <pre>};
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L41">
      <a href="#L41">41</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">static</span> <span class="keyword">union</span> MSVC_EVIL_FLOAT_HACK INFINITY_HACK = {{<span class="hex">0x00</span>, <span class="hex">0x00</span>, <span class="hex">0x80</span>, <span class="hex">0x7F</span>}};
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L42">
      <a href="#L42">42</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#define</span> INFINITY (INFINITY_HACK.Value)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L43">
      <a href="#L43">43</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#endif</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L44">
      <a href="#L44">44</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L45">
      <a href="#L45">45</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#ifdef</span> __GNUC__
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L46">
      <a href="#L46">46</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#define</span> INFINITY (__builtin_inf())
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L47">
      <a href="#L47">47</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#endif</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L48">
      <a href="#L48">48</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L49">
      <a href="#L49">49</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#ifndef</span> INFINITY
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L50">
      <a href="#L50">50</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#define</span> INFINITY (<span class="float">1</span>e1000)
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L51">
      <a href="#L51">51</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#endif</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L52">
      <a href="#L52">52</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#endif</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L53">
      <a href="#L53">53</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L54">
      <a href="#L54">54</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L55">
      <a href="#L55">55</a>
    </th>
    <td class="line-code">
      <pre><span class="keyword">typedef</span> <span class="keyword">enum</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L56">
      <a href="#L56">56</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L57">
      <a href="#L57">57</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">/** Standard mode: swipe to scroll */</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L58">
      <a href="#L58">58</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomModeSheet,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L59">
      <a href="#L59">59</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">/** Frame mode (i.e. drag inside objects): hold finger at edge of the screen to the sroll in this direction */</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L60">
      <a href="#L60">60</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomModeFrame  
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L61">
      <a href="#L61">61</a>
    </th>
    <td class="line-code">
      <pre>} CCLayerPanZoomMode;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L62">
      <a href="#L62">62</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L63">
      <a href="#L63">63</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L64">
      <a href="#L64">64</a>
    </th>
    <td class="line-code">
      <pre><span class="keyword">typedef</span> <span class="keyword">enum</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L65">
      <a href="#L65">65</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L66">
      <a href="#L66">66</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeNone,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L67">
      <a href="#L67">67</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeTop,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L68">
      <a href="#L68">68</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeBottom,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L69">
      <a href="#L69">69</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeLeft,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L70">
      <a href="#L70">70</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeRight,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L71">
      <a href="#L71">71</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeTopLeft,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L72">
      <a href="#L72">72</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeBottomLeft,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L73">
      <a href="#L73">73</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeTopRight,
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L74">
      <a href="#L74">74</a>
    </th>
    <td class="line-code">
      <pre>    kCCLayerPanZoomFrameEdgeBottomRight
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L75">
      <a href="#L75">75</a>
    </th>
    <td class="line-code">
      <pre>} CCLayerPanZoomFrameEdge;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L76">
      <a href="#L76">76</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L77">
      <a href="#L77">77</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L78">
      <a href="#L78">78</a>
    </th>
    <td class="line-code">
      <pre>class CCLayerPanZoom : public cocos2d::CCLayer
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L79">
      <a href="#L79">79</a>
    </th>
    <td class="line-code">
      <pre>{
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L80">
      <a href="#L80">80</a>
    </th>
    <td class="line-code">
      <pre><span class="label">public:</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L81">
      <a href="#L81">81</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L82">
      <a href="#L82">82</a>
    </th>
    <td class="line-code">
      <pre>    virtual <span class="predefined-type">bool</span> init();  
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L83">
      <a href="#L83">83</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L84">
      <a href="#L84">84</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// there's no 'id' in cpp, so we recommend to return the exactly class pointer</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L85">
      <a href="#L85">85</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">static</span> CCLayerPanZoom* layer();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L86">
      <a href="#L86">86</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L87">
      <a href="#L87">87</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// implement the &quot;static node()&quot; method manually</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L88">
      <a href="#L88">88</a>
    </th>
    <td class="line-code">
      <pre>    CREATE_FUNC(CCLayerPanZoom);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L89">
      <a href="#L89">89</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L90">
      <a href="#L90">90</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setMaxScale(<span class="predefined-type">float</span> maxScale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L91">
      <a href="#L91">91</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> maxScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L92">
      <a href="#L92">92</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setMinScale(<span class="predefined-type">float</span> minScale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L93">
      <a href="#L93">93</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> minScale(); 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L94">
      <a href="#L94">94</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setRubberEffectRatio(<span class="predefined-type">float</span> rubberEffectRatio);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L95">
      <a href="#L95">95</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> rubberEffectRatio();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L96">
      <a href="#L96">96</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L97">
      <a href="#L97">97</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//ToDo add delegate</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L98">
      <a href="#L98">98</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _maxTouchDistanceToClick, maxTouchDistanceToClick);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L99">
      <a href="#L99">99</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(CCArray*, _touches, touches);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L100">
      <a href="#L100">100</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _touchDistance, touchDistance);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L101">
      <a href="#L101">101</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _minSpeed, minSpeed);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L102">
      <a href="#L102">102</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _maxSpeed, maxSpeed);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L103">
      <a href="#L103">103</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _topFrameMargin, topFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L104">
      <a href="#L104">104</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _bottomFrameMargin, bottomFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L105">
      <a href="#L105">105</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _leftFrameMargin, leftFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L106">
      <a href="#L106">106</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _rightFrameMargin, rightFrameMargin);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L107">
      <a href="#L107">107</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L108">
      <a href="#L108">108</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(CCScheduler*, _scheduler, scheduler);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L109">
      <a href="#L109">109</a>
    </th>
    <td class="line-code">
      <pre>    CC_SYNTHESIZE(<span class="predefined-type">float</span>, _rubberEffectRecoveryTime, rubberEffectRecoveryTime);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L110">
      <a href="#L110">110</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L111">
      <a href="#L111">111</a>
    </th>
    <td class="line-code">
      <pre>    CCRect _panBoundsRect;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L112">
      <a href="#L112">112</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> _maxScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L113">
      <a href="#L113">113</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> _minScale;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L114">
      <a href="#L114">114</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L115">
      <a href="#L115">115</a>
    </th>
    <td class="line-code">
      <pre>    CCLayerPanZoomMode _mode;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L116">
      <a href="#L116">116</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L117">
      <a href="#L117">117</a>
    </th>
    <td class="line-code">
      <pre>    CCPoint _prevSingleTouchPositionInLayer; 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L118">
      <a href="#L118">118</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//&lt; previous position in layer if single touch was moved.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L119">
      <a href="#L119">119</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L120">
      <a href="#L120">120</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Time when single touch has began, used to wait for possible multitouch </span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L121">
      <a href="#L121">121</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// gestures before reacting to single touch.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L122">
      <a href="#L122">122</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">double</span> _singleTouchTimestamp; 
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L123">
      <a href="#L123">123</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L124">
      <a href="#L124">124</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Flag used to call touchMoveBeganAtPosition: only once for each single touch event.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L125">
      <a href="#L125">125</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> _touchMoveBegan;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L126">
      <a href="#L126">126</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L127">
      <a href="#L127">127</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> _rubberEffectRatio;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L128">
      <a href="#L128">128</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> _rubberEffectRecovering;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L129">
      <a href="#L129">129</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">bool</span> _rubberEffectZooming;
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L130">
      <a href="#L130">130</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L131">
      <a href="#L131">131</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//CCStandartTouchDelegate</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L132">
      <a href="#L132">132</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> ccTouchesBegan(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L133">
      <a href="#L133">133</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> ccTouchesMoved(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L134">
      <a href="#L134">134</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> ccTouchesEnded(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L135">
      <a href="#L135">135</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> ccTouchesCancelled(cocos2d::CCSet *pTouches, cocos2d::CCEvent *pEvent);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L136">
      <a href="#L136">136</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L137">
      <a href="#L137">137</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">// Updates position in frame mode.</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L138">
      <a href="#L138">138</a>
    </th>
    <td class="line-code">
      <pre>    virtual <span class="directive">void</span> update(<span class="predefined-type">float</span> dt);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L139">
      <a href="#L139">139</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> onEnter();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L140">
      <a href="#L140">140</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> onExit();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L141">
      <a href="#L141">141</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L142">
      <a href="#L142">142</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//Scale and Position related</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L143">
      <a href="#L143">143</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setPanBoundsRect(CCRect rect);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L144">
      <a href="#L144">144</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setPosition(CCPoint  position);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L145">
      <a href="#L145">145</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> setScale(<span class="predefined-type">float</span> scale);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L146">
      <a href="#L146">146</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L147">
      <a href="#L147">147</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//Ruber Edges related</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L148">
      <a href="#L148">148</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> recoverPositionAndScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L149">
      <a href="#L149">149</a>
    </th>
    <td class="line-code">
      <pre>    <span class="directive">void</span> recoverEnded();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L150">
      <a href="#L150">150</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L151">
      <a href="#L151">151</a>
    </th>
    <td class="line-code">
      <pre>    <span class="comment">//Helpers</span>
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L152">
      <a href="#L152">152</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> topEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L153">
      <a href="#L153">153</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> leftEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L154">
      <a href="#L154">154</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> bottomEdgeDistance();    
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L155">
      <a href="#L155">155</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> rightEdgeDistance();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L156">
      <a href="#L156">156</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> minPossibleScale();
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L157">
      <a href="#L157">157</a>
    </th>
    <td class="line-code">
      <pre>    CCLayerPanZoomFrameEdge frameEdgeWithPoint( cocos2d::CCPoint point);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L158">
      <a href="#L158">158</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> horSpeedWithPosition(CCPoint pos);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L159">
      <a href="#L159">159</a>
    </th>
    <td class="line-code">
      <pre>    <span class="predefined-type">float</span> vertSpeedWithPosition(CCPoint pos);
</pre>
    </td>
  </tr>
  

  <tr>
    <th class="line-num" id="L160">
      <a href="#L160">160</a>
    </th>
    <td class="line-code">
      <pre>};</pre>
    </td>
  </tr>
  

</tbody>
</table>
</div>




 
        
        <div style="clear:both;"></div>
    </div>
</div>

<div id="ajax-indicator" style="display:none;"><span>Lade...</span></div>

<div id="footer">
  <div class="bgl"><div class="bgr">
    Powered by BitNami <a href="http://bitnami.org/stack/redmine">Redmine</a> &copy; 2006-2011 Jean-Philippe Lang
  </div></div>
</div>
</div>
</div>

</body>
</html>

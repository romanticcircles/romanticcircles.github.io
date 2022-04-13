<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__1d18fa2003e19e3579cfc31bd95f470983ba4ff38b5a5814340f9c5c1f091216 */
class __TwigTemplate_06968c4b3091139e324504e97bd8045eced7667cccacb07204cbb46fca5c7409 extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        echo "<div class = \"panel\" >
<div class=\"square effect6\">
";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 3, $this->source), "html", null, true);
        echo " 
<div class=\"info\">
<a href=\"";
        // line 5
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 5, $this->source), "html", null, true);
        echo "\">
<h3> ";
        // line 6
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 6, $this->source)), "html", null, true);
        echo " </h3>
<h5> ";
        // line 7
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_date_published"] ?? null), 7, $this->source)), "html", null, true);
        echo " </h5>
<p> ";
        // line 8
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, strip_tags($this->sandbox->ensureToStringAllowed(($context["field_description"] ?? null), 8, $this->source)), "html", null, true);
        echo " </p>
</a>
</div>
</div>
<h4>";
        // line 12
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title"] ?? null), 12, $this->source), "html", null, true);
        echo "</h4>
</div>";
    }

    public function getTemplateName()
    {
        return "__string_template__1d18fa2003e19e3579cfc31bd95f470983ba4ff38b5a5814340f9c5c1f091216";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  67 => 12,  60 => 8,  56 => 7,  52 => 6,  48 => 5,  43 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__1d18fa2003e19e3579cfc31bd95f470983ba4ff38b5a5814340f9c5c1f091216", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array();
        static $filters = array("escape" => 3, "striptags" => 6);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                [],
                ['escape', 'striptags'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
